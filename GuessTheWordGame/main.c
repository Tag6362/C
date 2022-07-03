#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int isPlayerReady = 0;




    printf("Welcome to \"Guess The Word\" Game!\n");
    printf("The objective is simple; you have 10 tries to find a word between 4 and 8 characters\n");

    printf("Are you willing to play? Y or N\n");
    scanf("%c", &isPlayerReady);

    toupper(isPlayerReady);

    if (isPlayerReady == 'Y') {
        printf("%s", test[0]);
    }



    return 0;
}
