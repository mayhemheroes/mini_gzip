#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../mini_gzip.h"

uint8_t output[1024*1024*8];

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
    struct mini_gzip gz;
    mini_gz_init(&gz);
    if (Size > 0) {
        if (mini_gz_start(&gz, Data, Size) == 0) {
            mini_gz_unpack(&gz, output, 1024*1024*8);
        }
    }
    return 0;
}