#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "inputBuffer.h"
#include "metaCommand.h"
#include "statement.h"

int main() {
    struct InputBuffer* input_buffer = new_input_buffer();

    while (true) {
        print_prompt();
        read_input(input_buffer);

        if (strcmp(input_buffer, ".exit") == 0) {
        }
    }
}