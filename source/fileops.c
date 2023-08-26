#include "fileops.h"


void fops_read(const char *file_path) {
    FILE *fileptr;
    // fileptr = fopen(file_path, "r");
    fopen_s(&fileptr, file_path, "r");
    if (fileptr != NULL) {
        size_t newlen = fread(fops_buffer, sizeof(char), fops_buffer_size, fileptr);
        if (ferror(fileptr) != 0) {
            fputs("error reading file!", stderr);
        } else {
            fops_buffer[newlen++] = '\0';
        }
    }
    fclose(fileptr);
}
