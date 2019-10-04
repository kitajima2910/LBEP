#include <stdio.h>
#include <conio.h>

int tinhTong(int, int);

int main() {

	int a, b;
	printf("\n Nhap a, b: "); scanf("%i%i", &a, &b);
	printf("\n Tong: %i + %i = %i", a, b, tinhTong(a, b));
	
	getch();
	return 0;
}

int tinhTong(int a, int b) {
	return a + b;
}

