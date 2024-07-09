package tree_sitter_cram_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-cram"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cram.Language())
	if language == nil {
		t.Errorf("Error loading Cram grammar")
	}
}
