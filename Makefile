.PHONY: generate test build clean

generate:
	npm run generate

test:
	npm test

build: generate
	npm run build

clean:
	rm -rf build node_modules target

install:
	npm install

.DEFAULT_GOAL := generate
