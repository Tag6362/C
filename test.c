#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	char entry[20];
	
	puts("Enter a string");
	fgets(entry, 20, stdin);

	int len = 0;
	int i = 0;

	while (entry[i] != '\0')  {
		len++; i++;
	}
	printf("Length of the string is : %d, or %d without the \\n", len, (len-1));
	return 0;
}

