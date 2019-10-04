#include <stdio.h>
#include <conio.h>

int main() {
	
	printf("Even:");
	for(int i = 0; i < 10; i = i + 2) {
		printf("\n\t%d", i);
	}
	printf("\nOdd:");
	for(int i = 1; i < 10; i = i + 2) {
		printf("\n\t%d", i);
	}

	getch();
	return 0;
}

