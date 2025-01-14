/**
 * @file A notation for representing Gregorian chant using ASCII characters.
 * @author Alex Harter <alex@harter.tech>
 * @license GPL-3.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "gabc",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
