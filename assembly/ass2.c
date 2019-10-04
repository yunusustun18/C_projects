#include <stdio.h>
#include <string.h>

int main() {
    int int_array[] = {1, 2, 3, 4, 5};
    int *int_pointer;
    char char_array[] = {'a', 'b', 'c', 'd', 'e'};
    char *char_pointer;
    int_pointer = int_array;
    char_pointer = char_array;
    for (int i = 0; i < 5; ++i) {
        printf("[DEBUG]-Adress: %p\tValue:%d\n", int_pointer, *int_pointer);
        int_pointer++;
    }
    printf("\n");
    for (int j = 0; j < 5; ++j) {
        printf("[DEBUG]-Adress: %p\tValue:%c\n", char_pointer, *char_pointer);
        char_pointer++;
    }
    return 0;
}