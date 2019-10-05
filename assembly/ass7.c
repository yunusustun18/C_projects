#include <stdio.h>

int main(int argc, char *argv[]) {

    char *char_p;
    int mem;
    int *int_p;

    if (argc == 1) {
        mem = 50;
    } else {
        atoi(argv[1]);
    }

    char_p = (char *) malloc(mem);
    strcpy(char_p, "HODOR!");

    printf("[+]Allocated %d bytes from heap\n", mem);
    printf("Char pointer: %p", char_p);

    int_p = (int *) malloc(16);
    *int_p = 3;
    printf("\n[+]Allocated 16 bytes from heap\n");
    printf("Int pointer: %p", int_p);

    free(char_p);

    char_p = (char *) malloc(mem);

    strcpy(char_p, "HODOR!");

    printf("\n[+]Allocated %d bytes from heap\n", mem);
    printf("Char pointer: %p\n", char_p);

    return 0;
}