#include <stdio.h>
#include <conio.h>

int main() {
	
	printf("Even:");
	for(int i = 10; i >= 0; i = i - 2) {
		printf("\n\t%d", i);
	}
	printf("\nOdd:");
	for(int i = 11; i >= 1; i = i - 2) {
		printf("\n\t%d", i);
	}

	getch();
	return 0;
}

