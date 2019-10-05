#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int count;
    count = atoi(argv[2]);
    if (count < 3) {
        printf("%s", "give 3 arguments\n");
        return 0;
    }
    for (int i = 0; i < count; ++i) {
        printf("%s\n", argv[1]);
    }
    return 0;
}