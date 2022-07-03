#include <stdio.h>
#include <stdlib.h>


int main(){
	int l, L, i;
	l = 0;
	L = 0;
	i = 0;

	char symb[2];

    /*
    Place Character get in first, as if it is placed after a scanf, it will automatically receive the \n provided by it.
    If I had to mix them, it would be necessary to flush the input.
    See https://stackoverflow.com/questions/2907062/fgets-instructions-gets-skipped-why
    */


	printf("Character?\n");
    fgets(symb, 2, stdin);

	printf("Length? \n");
	scanf("%d", &L);

    printf("Width?\n");
    scanf("%d", &l);

    printf("\n\n");

	for(i = 0; i < L; i++) {
		printf("%s", symb);
	}

	printf("\n");

	for(i = 1; i < l-1; i++) {
		printf("%s", symb);

		for(int i = 1; i < L-1; i++) {
			printf(" ");
		}
		printf("%s\n", symb);
	}

	for(i = 0; i < L; i++) {
		printf("%s", symb);
	}

	return 0;
}
