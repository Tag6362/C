#include <stdio.h>
#include <stdlib.h>

#include "main.h"

float average(float sum, int number);

int main()
{
    int number;
    float sum = 0.0;
    float entry;

    printf("Hello!\n");
    printf("How many values do you want to enter?\n");
    scanf("%d", &number);

    printf("Enter a number, and press enter, then press the next one, etc.\n");
    for (int i = 0; i < number; i++) {
        scanf("%f", &entry);
        sum = sum + entry;
    }
    printf("The average is %f", average(sum, number));

    return 0;
}
