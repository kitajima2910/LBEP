#include <stdio.h>
#include <conio.h>

int main() {

	float a, b, c;
	printf("Nhap a, b, c: "); scanf("%f%f%f", &a, &b, &c);
	float tb = (a + b + c) / 3;
	if(tb >= 90) {
		printf("E+");
	} else if(tb >= 80) {
		printf("E");
	} else if(tb >= 70) {
		printf("A+");
	} else if(tb >= 60) {
		printf("A");
	} else if(tb >= 50) {
		printf("B+");
	} else {
		printf("ROT");
	}
	
	getch();
	return 0;
}

