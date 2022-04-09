#include "inputBuffer.h"

#pragma once

enum MetaCommandResult { META_COMMAND_SUCCESS, META_COMMAND_UNRECOGNIYED_COMMAND };

enum PrepareResult { PREPARE_SUCCESS, PREPARE_UNRECOGNIZED_STATEMENT };

enum MetaCommandResult do_meta_command(struct InputBuffer* input_buffer);