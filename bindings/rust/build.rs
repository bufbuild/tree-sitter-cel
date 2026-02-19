fn main() {
    println!("cargo:rustc-check-cfg=cfg(feature, values(\"highlights\", \"injections\"))");

    let mut c_config = cc::Build::new();
    c_config.std("c11").include("src");
    #[cfg(target_env = "msvc")]
    {
        c_config.flag("/utf-8");
    }

    if std::env::var("CARGO_CFG_TARGET_WASM32").is_ok() {
        c_config
            .flag_if_supported("-nostdinc")
            .flag_if_supported("-Wno-builtin-macro-redefined");
        let wasm_headers = std::env::var("DEP_TREE_SITTER_LANGUAGE_WASM_HEADERS")
            .expect("DEP_TREE_SITTER_LANGUAGE_WASM_HEADERS is not set");
        let wasm_src = std::env::var("DEP_TREE_SITTER_LANGUAGE_WASM_SRC")
            .expect("DEP_TREE_SITTER_LANGUAGE_WASM_SRC is not set");
        c_config.include(&wasm_headers);

        let mut wasm_c_config = cc::Build::new();
        wasm_c_config
            .std("c11")
            .include(&wasm_src)
            .include(&wasm_headers)
            .flag_if_supported("-nostdinc")
            .flag_if_supported("-Wno-builtin-macro-redefined")
            .file(format!("{}/stdio.c", wasm_src))
            .file(format!("{}/stdlib.c", wasm_src))
            .file(format!("{}/string.c", wasm_src));
        wasm_c_config.compile("wasm");
    }

    c_config.file("src/parser.c");
    c_config.compile("tree-sitter-cel");

    println!("cargo:rerun-if-changed=src/parser.c");

    if std::path::Path::new("queries/highlights.scm").exists() {
        println!("cargo:rustc-cfg=feature=\"highlights\"");
    }
    if std::path::Path::new("queries/injections.scm").exists() {
        println!("cargo:rustc-cfg=feature=\"injections\"");
    }
}
