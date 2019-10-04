#include <stdio.h>
#include <conio.h>

int main() {

	int n;
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
	
	printf("\nDay so nguoc lai: \n");
	for(int i = n - 1; i >= 0; --i) {
		printf("%5i", *(arr + i));
	}
	
	getch();
	return 0;
}

