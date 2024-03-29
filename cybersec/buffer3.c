#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_authentication(char *password) {
    char password_buffer[16];
    int auth_flag = 0;

    strcpy(password_buffer, password);

    if (strcmp(password_buffer, "buffer") == 0) {
        auth_flag = 1;
    }
    if (strcmp(password_buffer, "array") == 0) {
        auth_flag = 1;
    }
    return auth_flag;

}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("usage: %s <password>\n", argv[0]);
        return 0;
    }

    if (check_authentication(argv[1])) {
        printf("-=-=-=-=-=-=-=-\n");
        printf("Access Granted\n");
        printf("-=-=-=-=-=-=-=-\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}