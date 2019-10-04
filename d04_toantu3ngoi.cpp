#include <stdio.h>
#include <conio.h>

int main() {
	
	int a, b, c;
	printf("\nNhap a, b, c: "); scanf("%i%i%i", &a, &b, &c);
	
	int max = a > b ? a : b;
	max = max > c ? max : c;
	
	printf("Max: [%d, %d, %d] >>> %d", a, b, c, max);
	
	getch();
	return 0;
}

