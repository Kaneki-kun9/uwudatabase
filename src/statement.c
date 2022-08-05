#include "statement.h"

#include "inputBuffer.h"
#include "metaCommand.h"

enum PrepareResult prepare_statement(struct InputBuffer* input_buffer, struct Statement* statement) {
    if (strncmp(input_buffer->buffer, "insert", 6) == 0) {
        statement->type = STATEMENT_INSERT;
        return PREPARE_SUCCESS;
    }
    if (strncmp(input_buffer->buffer, "select", 6) == 0) {
        statement->type = STATEMENT_SELECT;
        return PREPARE_SUCCESS;
    }

    return PREPARE_UNRECOGNIZED_STATEMENT;
}

void execute_statement(struct Statement* statement) {
    switch (statement->type) {
        case (STATEMENT_INSERT):
            +printf("This is where we would do an insert.\n");
            break;
        case (STATEMENT_SELECT):
            +printf("This is where we would do a select.\n");
            break;
    }
}
