#include <stdio.h>
#include <conio.h>

int main() {
	
	int a, b, c;
	printf("Nhap a, b, c: "); scanf("%d%d%d", &a, &b, &c);
	int max = a;
	if(b > max) {
		max = b;
	}
	if(c > max)
	{
		max = c;
	}
	printf("Max = %d", max);
	
	getch();
	return 0;
}
