#include <tree_sitter/parser.h>

enum TokenType {
    LANG
};

void * tree_sitter_jet_external_scanner_create() {
    return NULL;
}

void tree_sitter_jet_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_jet_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_jet_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_jet_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (lexer->lookahead == '<') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '%') {
            return false;
        }
    }
    if (lexer->lookahead == '%') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '>') {
            lexer->result_symbol = LANG;
            return false;
        }
    }
    if (lexer->lookahead == 0) {
        return false;
    }
    while(true) {
        if (lexer->lookahead == '<') {
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
            if (lexer->lookahead == '%') {
                lexer->result_symbol = LANG;
                return true;
            }
        }
        if (lexer->lookahead == '%') {
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
            if (lexer->lookahead == '>') {
                lexer->result_symbol = LANG;
                return true;
            }
        }
        if (lexer->lookahead == 0) {
            lexer->mark_end(lexer);
            lexer->result_symbol = LANG;
            return true;
        }
        lexer->advance(lexer, false);
    }
}
