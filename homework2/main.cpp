#include <stdlib.h>
#include <stdio.h>

int main() {
    int random, health = 2, guess;
    random = 1 + rand() % 9;
    while (health > 0) {
        printf("%s", "\nguess the number : ");
        scanf("%d", &guess);
        int result = guess - random;
        if (abs(guess - random) >= 5) {
            printf("%s", "you are too far from the number");
        } else if (abs(guess - random) >= 3) {
            printf("%s", "you are far from the number");
        } else if (abs(random - guess) >= 2) {
            printf("%s", "you are close the number");
        } else if (random == guess) {
            printf("%s", "congratulation you won");
            return 0;
        }
        health--;
    }

}