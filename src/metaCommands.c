#include <stdlib.h>
#include <string.h>

#include "inputBuffer.h"
#include "metaCommand.h"

enum MetaCommandResult do_meta_command(struct InputBuffer* input_buffer) {
    if (strcmp(input_buffer->buffer, ".exit") == 0) {
        exit(EXIT_SUCCESS);
    } else {
        return META_COMMAND_UNRECOGNIYED_COMMAND;
    }
}