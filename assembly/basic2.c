#include <stdio.h>
#include <string.h>

int main() {
    char buffer[20];
    strcpy(buffer, "Hello World!\n");
    printf("%s", buffer);
    return 0;
}
