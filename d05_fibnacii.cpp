#include <stdio.h>
#include <conio.h>

int main() {

	int n;
	printf("Nhap n[2 - 20]: "); scanf("%i", &n);
	
	int fibo[n];
	fibo[0] = fibo[1] = 1;
	
	for(int i = 2; i < n; ++i) {
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	
	printf("Day so fibonacci %d phan tu: \n", n);
	for(int i = 0; i < n; ++i) {
		printf("%8d\n", *(fibo + i));
	}
	
	getch();
	return 0;
}

