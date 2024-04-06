package tree_sitter_jet_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-jet"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jet.Language())
	if language == nil {
		t.Errorf("Error loading Jet grammar")
	}
}
