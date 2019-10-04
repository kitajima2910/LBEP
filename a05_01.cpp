#include <stdio.h>
#include <conio.h>

int main() {
	
	int nam;
	printf("Nhap nam: "); scanf("%i", &nam);
	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
		printf("%d la nam nhuan", nam);
	} else {
		printf("%d khong la nam nhuan", nam);
	}
	
	getch();
	return 0;
}

