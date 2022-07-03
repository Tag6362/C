#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 20
#define NUMS_TO_GENERATE 10


int randomInt();

int main()
{
    int a, b, j, answer;



    srand((unsigned)time(NULL));

    printf("Welcome to the Mental Calculus Program!\n");
    printf("You will be given 10 calculations to do, on relative integers\n");


    for (int i = 0; i < NUMS_TO_GENERATE; i++) {
        a = randomInt();
        b = randomInt();

        printf("%d x %d = ", a, b);
        scanf("%d", &answer)

        if (answer == a * b) {
            printf("Congrats!\n");
        } else {
            printf("Stupid you, the answer was %d\n", a * b);
        }
    }

    return 0;
}

int randomInt() {
        return rand() % MAX;
}
