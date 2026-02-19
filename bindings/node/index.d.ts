import type { Language } from "tree-sitter";

type BaseNode = {
  type: string;
  named: boolean;
};

type ChildNode = BaseNode & {
  multiple: boolean;
  required: boolean;
  types: BaseNode[];
};

type NodeInfo =
  | {
      subtypes: BaseNode[];
    }
  | {
      fields?: Record<string, ChildNode>;
      children?: ChildNode[];
    };

declare const binding: {
  readonly language: Language;
  readonly nodeTypeInfo: NodeInfo[];
  readonly HIGHLIGHTS_QUERY?: string;
  readonly INJECTIONS_QUERY?: string;
};

export default binding;
