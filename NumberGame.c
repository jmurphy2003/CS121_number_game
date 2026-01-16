#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char user_name[50];
    int secret_number, guess, turns = 0;
    int keepGoing = 1;

    printf("Hi, what is your name? ");
    scanf("%49s", user_name);
    printf("Nice to meet you %s! Let's play a game.\n", user_name);

    srand(time(NULL));
    secret_number = rand() % 100 + 1;

    // printf("(DEBUG) Secret number is %d\n", secret_number);

    while (keepGoing) {
        turns++;
        printf("Turn %d) Please guess a number: ", turns);
        scanf("%d", &guess);

        if (guess > secret_number) {
            printf("too high\n");
        } else if (guess < secret_number) {
            printf("too low\n");
        } else {
            printf("you got it!\n");
            keepGoing = 0;
        }
    }

    printf("Great job!\n");
    if (turns < 7) {
        printf("Performance: very good\n");
    } else if (turns == 7) {
        printf("Performance: average\n");
    } else {
        printf("Performance: poor\n");
    }

    return 0;
}
