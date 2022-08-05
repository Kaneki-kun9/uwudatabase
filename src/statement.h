#pragma once
#include "inputBuffer.h"
#include <stdio.h>
#include <string.h>
#include "metaCommand.h"

enum StatementType { STATEMENT_INSERT, STATEMENT_SELECT };

struct Statement {
    enum StatementType type;
};

void execute_statement(struct Statement* statement);

enum PrepareResult prepare_statement(struct InputBuffer* input_buffer, struct Statement* statement);
