#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void printString(char*);

int main() {

	char* str = (char*)calloc(sizeof(char), sizeof(char));
	gets(str);
	printString(str);
	
	free(str);
	getch();
	return 0;
}

void printString(char* str) {
	printf("\n%s", str);
}
