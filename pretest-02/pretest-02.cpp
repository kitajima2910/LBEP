#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct RECTANGLES {
	int width;
	int heigth;
	char color[11];
} Rectangles;

char* doMenu();
void doQuestion1();
void divisorsOfN(int n);
void doQuestion2();
void doArrayRectangles(Rectangles r[], int n);
void doDisplayRectangles(Rectangles r[], int n);

int main() {

	while(true) {
		char* opt = doMenu();
		if(strcmp(opt, "1") == 0) {
			doQuestion1();
			getch();
		} else if(strcmp(opt, "2") == 0) {
			doQuestion2();
			getch();
		} else if(strcmp(opt, "3") == 0) {
			exit(1);
		} else {
			printf("Invalid, retry [1-3]...");
			getch();
		}
	}

	getch();
	return 0;
}

char* doMenu() {
	system("cls");
	printf("\n ****************************************");
	printf("\n * Selecting appropriate action: \t*");
	printf("\n * 1. Question 1 \t\t\t*");
	printf("\n * 2. Question 2 \t\t\t*");
	printf("\n * 3. Quit program \t\t\t*");
	printf("\n ****************************************");
	printf("\n Choice[1-3]: ");
	
	char* opt = (char*)calloc(256, sizeof(char));
	gets(opt);
	return opt;
}

void doQuestion1() {
	int n;
	printf("\n Enter an integer number N: "); scanf("%d", &n);
	fflush(stdin);
	divisorsOfN(n);
}

void divisorsOfN(int n) {
	int count = 0;
	printf(" Odd divisors of %d are: ", n);
	for(int i = 1; i <= n; i++) {
		if((n % i == 0) && (i % 2 == 1)) {
			printf(" %d ", i);
			count++;
		}
	}
	printf("\n Number of odd divisors of %d: %d", n, count);
}

void doQuestion2() {
	int n;
	do {
		printf("\n Enter number of rectangles: "); scanf("%d", &n);
	} while(n < 1 && printf("\n Retry n > 1..."));
	
	Rectangles r[n];
	doArrayRectangles(r, n);
	doDisplayRectangles(r, n);
}

void doArrayRectangles(Rectangles r[], int n) {
	printf(" Please enter the data for: ");
	for(int i = 0; i < n; i++) {
		printf("\n Rectangle no %d: \n", i + 1);
		printf(" Width: "); scanf("%d", &r[i].width);
		printf(" Heigth: "); scanf("%d", &r[i].heigth);
		fflush(stdin);
		printf(" Color: "); gets(r[i].color);
	}
}

void doDisplayRectangles(Rectangles r[], int n) {
	printf("\n Lists of Rectangles ");
	printf("\n %-5s %-7s %-7s %-7s %-7s ", "No", "Width", "Height", "Area", "Color");
	printf("\n ======================================= ");
	for(int i = 0; i < n; i++) {
		printf("\n %-5d %-7d %-7d %-7d %-7s ", i + 1, r[i].width, r[i].heigth, r[i].width * r[i].heigth , r[i].color);
	}
	printf("\n Total %d Rectangles", n);
}

