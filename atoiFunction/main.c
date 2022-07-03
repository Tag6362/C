#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    Using Pointers
    Atoi function: takes a table in entry (supposed an array containing integer values, returns the value in int
    */
    char array[20];

    int sum = 0;

    int i = 0;

    fgets(array, 20, stdin);

    while(array[i] != '\0') {
        if (array[i] == ' ') {break;}
        for (int j = 0; j < 10; j++){
            //printf("%c", j+'0');
            printf("%c\n", (char)j);
            if ((j+'0') == array[i]) {
                sum += j;
            }
        }
        i++;
    }
    printf("%d", sum);
    return 0;

}
