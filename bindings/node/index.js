const { readFileSync } = require('node:fs')
const path = require('node:path')

const root = path.join(__dirname, '..', '..')

const binding = require('node-gyp-build')(root)

try {
  binding.nodeTypeInfo = require('../../src/node-types.json')
} catch (_) {}

const queries = [
  ['HIGHLIGHTS_QUERY', path.join(root, 'queries', 'cel', 'highlights.scm')],
  ['INJECTIONS_QUERY', path.join(root, 'queries', 'injections.scm')],
]

for (const [prop, queryPath] of queries) {
  Object.defineProperty(binding, prop, {
    configurable: true,
    enumerable: true,
    get() {
      delete binding[prop]
      try {
        binding[prop] = readFileSync(queryPath, 'utf8')
      } catch (_) {}
      return binding[prop]
    },
  })
}

module.exports = binding
