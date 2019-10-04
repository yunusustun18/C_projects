#include <stdio.h>

int main() {
    char buffer[10];
    buffer[0] = 'A';
    buffer[1] = 'B';
    buffer[2] = 'C';
    buffer[3] = 'D';
    buffer[4] = 0;
    for (int i = 0; i < 7; ++i) {
        printf("\n[DEBUG] Buffer[%d]=%c: Adress: %p", i, buffer[i], &buffer[i]);
    }
    return 0;
}