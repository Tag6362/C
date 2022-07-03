#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[20];
    int i, j, sum;

    fgets(array, 20, stdin);


    while(*array != '\0') {
        printf("%c", *array);
        *array = *(array++);
    }


    return 0;
}
