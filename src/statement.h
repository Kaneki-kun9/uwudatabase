#pragma once

enum StatementType { STATEMENT_INSERT, STATEMENT_SELECT };

struct Statement {
    enum StatementType type;
};