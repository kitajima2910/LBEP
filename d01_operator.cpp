#include <stdio.h>
#include <conio.h>

int main() {
	
	// Khai bao 2 so nguyen a, b
	int a, b;
	
	// Gan gia tri cho a, b
	a = 105;
	b = 20;
	
	// Hien thi gia tri a, b
	printf("\n Gia tri cua a = %d", a);
	printf("\n Gia tri cua b = %d", b);
	printf("\n Gia tri cua a = %d, b = %d, a + b = %d", a, b, a + b);
	
	// Xu ly gia tri cac bien va hien thi
	a++;
	printf("\n Gia tri a++ = %d", a);
	a--;
	printf("\n Gia tri a-- = %d", a);
	
	getch();
	return 0;
}

