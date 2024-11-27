/**
 * @file a simple notation based exclusively on ASCII characters that enables the user to describe Gregorian chant scores
 * @author Alex Harter <alex@harter.tech>
 * @license GPLv3
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
