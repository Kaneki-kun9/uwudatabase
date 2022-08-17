#pragma once
#include "inputBuffer.h"
#include <stdio.h>
#include <string.h>
#include "metaCommand.h"

#define COLUM_USERNAME_SIZE 32
#define COLUM_EMAIL_SIZE 255

enum StatementType { STATEMENT_INSERT, STATEMENT_SELECT };

struct Row{
	uint32_t id;
	char username[COLUM_USERNAME_SIZE];
	char email[COLUM_EMAIL_SIZE];
};

struct Statement {
    enum StatementType type;
    Row row_to_insert; //only used by insert statement
};

void execute_statement(struct Statement* statement);

enum PrepareResult prepare_statement(struct InputBuffer* input_buffer, struct Statement* statement);
