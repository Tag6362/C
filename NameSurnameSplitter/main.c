#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char entry[41];
    char surname[20];
    char name[20];

    int i = 0;
    int j = 0;

    printf("Enter your surname and name, separated by a space:\n");

    //scanf("%s", entry);

    fgets(entry, 41, stdin);

    while (entry[i] != ' ') {
        surname[i] = entry[i];
        i++;
    }

    i++;
    while(entry[i] != '\0') {
        printf("%c\n",entry[i]);
        name[j] = entry[i];
        i++;
        j++;
    }

    printf("Surname:%s \nName:%s", surname, name);

    return 0;
}
