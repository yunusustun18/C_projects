#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("you have entered %d arguments\n", argc);
    for (int i = 0; i < argc; ++i) {
        printf("Argument number [%d] = %s\n", i, argv[i]);
    }
    return 0;
}