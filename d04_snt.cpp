#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	
	int n, flag = 1;
	
	do {
		printf("Nhap n: ");scanf("%i", &n);
		if(n < 2) {
			printf("So nhap KHONG HOP LE\n"); continue;
		}
		break;
	}while(1);
	
	
	if(n < 2) {
		flag = 0;
	} else {
		for(int i = 2; i <= sqrt(n); ++i) {
			if(n % i == 0) {
				flag = 0; break;
			}
		}
	}
	
	if(flag == 1) {
		printf("\n%i la so nguyen to", n);
	} else {
		printf("\n%i la hop so", n);
	}

	getch();
	return 0;
}

