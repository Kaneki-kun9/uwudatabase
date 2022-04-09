#pragma once

#include <stddef.h>
#include <stdio.h>

struct InputBuffer {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
};

struct InputBuffer* new_input_buffer();

void print_prompt();

void read_input(struct InputBuffer* input_buffer);

void close_input_buffer(struct InputBuffer* input_buffer);