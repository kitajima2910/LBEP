#include <stdio.h>
#include <conio.h>

int main() {

	int sum1, sum2;
	sum1 = sum2 = 0;
	
	for(int i = 0; i < 5; i++) {
		sum1 = sum1 + 2*i;
	}
	
	for(int i = 0; i < 5; i++) {
		sum2 = sum2 + 2*i + 1;
	}
	
	int max = 5;
	for(int i = 0, j = max; i <= max; i++, j--) {
		printf("\n%d + %d = %d", i, j, i + j);
	}
	
	printf("\n");
	for(int i = 1; i <= 3; i++) {
		for(int j = 1; j <= 4; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("\nSum1 = %d", sum1);
	printf("\nSum2 = %d", sum2);

	getch();
	return 0;
}

