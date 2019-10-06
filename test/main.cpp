#include <iostream>

int main() {
    bool flag = true;
    int count = 1;
    if (flag) {
        printf("it's here\n");
    }
    while (flag) {
        printf("%d. it's here\n", count);
        if (count > 3) {
            printf("exit the code\n");
            return 0;
        }
        count++;
    }
    return 0;
}