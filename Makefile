.PHONY: generate test clean

generate:
	tree-sitter generate

test:
	npm test

clean:
	rm -rf build node_modules target

install:
	npm install

.DEFAULT_GOAL := generate
