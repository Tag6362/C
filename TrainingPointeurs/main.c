#include <stdio.h>

int main(int argc, char *argv[])  {
    char *fruits[] = {
        "melon",
        "banane",
        "poire",
        "pomme",
        "noix",
        "raisin",
        "myrtille"
    };
    int x;

    for(x =0; x < 7; x++) {
        putchar(**(fruits+x));
        putchar('\n');
        printf("%s\n", *(fruits+x));
    }
    return 0;
}
