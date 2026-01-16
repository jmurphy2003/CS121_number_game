#include <stdio.h>

int main() {
    char user_name[50];

    printf("Hi, what is your name? ");
    scanf("%49s", user_name);

    printf("Nice to meet you %s! Let's play a game.\n", user_name);

    return 0;
}
