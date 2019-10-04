#include <stdio.h>
#include <conio.h>

int main() {
	
	int thang, nam;
	printf("Nhap thang: "); scanf("%d", &thang);
	if(thang < 1 || thang > 12) {
		printf("Thang KHONG HOP LE...");
	} else {
		switch(thang) {
			case 4: case 6: case 9: case 11:
				printf("Thang %d co 30 ngay", thang);
				break;
			case 2:
				printf("Nhap nam: "); scanf("%d", &nam);
				if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
					printf("Thang %d nam %d co 29 ngay", thang, nam);
				} else {
					printf("Thang %d nam %d co 28 ngay", thang, nam);
				}
				break;
			default:
				printf("Thang %d co 31 ngay", thang);
				break;
		}	
	}

	getch();
	return 0;
}

