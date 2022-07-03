#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main() {
    char entry[20];


    printf("Enter a string:\n");
    fgets(entry, 20, stdin);
    printf("%s", entry);

    return 0;
}
