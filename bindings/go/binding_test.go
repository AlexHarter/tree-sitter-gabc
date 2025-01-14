package tree_sitter_gabc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gabc "gregorio-project.github.io/gabc/index/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gabc.Language())
	if language == nil {
		t.Errorf("Error loading gabc grammar")
	}
}
