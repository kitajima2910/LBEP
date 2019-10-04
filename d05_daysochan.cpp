#include <stdio.h>
#include <conio.h>

int main() {

	int n, flag = 1;
	do {
		printf("\nNhap n[2-20]: "); scanf("%i", &n);
	}while((n < 2 || n > 20) && printf("\nNhap sai, hay nhap lai...!"));
	
	int arr[n];
	for(int i = 0; i < n; ++i) {
		printf("arr[%d] = ", i); scanf("%i", arr + i);
	}
	
	printf("\nDay so vua nhap: \n");
	for(int i = 0; i < n; ++i) {
		printf("%5i", *(arr + i));
	}
	
	for(int i = 0; i < n; ++i) {
		if((*(arr + i)) % 2 == 1) {
			flag = 0; break;
		}
	}
	
	if(flag == 0) {
		printf("\nDay khong phai la day so chan...");
	} else {
		printf("\nDay la day so chan...");
	}
	
	
	getch();
	return 0;
}

