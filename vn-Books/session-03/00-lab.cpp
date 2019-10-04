#include <stdio.h>
#include <conio.h>

int square(int);

int main() {

	int n;
	printf("### SQUARE NUMBER ###");
	printf("\nEnter n: "); scanf("%d", &n);
	printf("%d^2 = %d", n, square(n));

	getch();
	return 0;
}

int square(int number) {
	return number * number;
}

