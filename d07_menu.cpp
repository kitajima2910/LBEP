#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Q1();
void Q2();

int main() {
	
	int opt;
	
	do {
		system("cls");
		printf("\t\n === MENU ===");
		printf("\n 1. Question 1");
		printf("\n 2. Question 2");
		printf("\n 3. Exit");
		printf("Choice[1-2]: ");
		
		scanf("%i", &opt);
		switch(opt) {
			case 1:
				Q1();
				getch();
				break;
			case 2:
				Q2();
				getch();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Error...");
				break;
		}
		
	}while(1);

	getch();
	return 0;
}

void Q1() {
	int n;
	double mul = 1;
	do {
		printf("\n Enter n: "); scanf("%i", &n);
	}while((n < 1 || n > 20) && printf(" Check n > 0...\n"));
	for(int i = 1; i <= n; ++i) {
		mul = mul * i;
	}
	printf("\n %i! = %.0f", n, mul);
}

void Q2() {
	int n, sum = 0;
	do {
		printf("\n Enter n: "); scanf("%i", &n);
	}while((n < 1) && printf(" Check n > 0...\n"));
	
	printf("\n Result: ");
	for(int i = 1; i <= n; i = i + 2) {
		printf(" %i ", i);
		sum = sum + i;
	}
	printf("\n Sum = %i", sum);
}

