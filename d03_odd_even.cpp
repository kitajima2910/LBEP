#include <stdio.h>
#include <conio.h>

int main() {

	int n;
	printf("############# EVEN - ODD #############\n");
	printf("Enter a number: "); scanf("%i", &n);
	if(n % 2 == 0) {
		printf("%d is even", n);
	} else {
		printf("%d is odd", n);
	}

	getch();
	return 0;
}

