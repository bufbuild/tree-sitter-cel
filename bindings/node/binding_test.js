const assert = require('node:assert')
const { test } = require('node:test')
const Parser = require('tree-sitter')

test('can load grammar', () => {
  const parser = new Parser()
  assert.doesNotReject(async () => {
    const binding = require('./index.js')
    parser.setLanguage(binding)
  })
})
