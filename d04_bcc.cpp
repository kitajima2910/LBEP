#include <stdio.h>
#include <conio.h>

int main() {
	
	int n;
	do {
		printf("Nhap n[2-9]: "); scanf("%d", &n);
	}while(n < 2 | n > 9);
	
	printf("\nBang cuu chuong %d:\n", n);
	for(int i = 1; i <= 10; ++i) {
		printf("\n%3d x %3d = %3d", n, i, n * i);
	}
	
	getch();
	return 0;
}

