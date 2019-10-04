#include <stdio.h>
#include <conio.h>

int main() {

	/*
		phu cap:
			+ A-100
			+ B-500
			+ C-800
			+ D-2000
	*/
	float luongCB, phuCap;
	char bacLuong;
	char tenNV[31];
	printf("##### THONG TIN NHAN VIEN #####\n");
	printf("Nhap ho va ten: "); gets(tenNV);
	printf("Nhap luong co ban: "); scanf("%f", &luongCB);
	printf("Bac luong[A-D]: ");
	bacLuong = getche();
	switch(bacLuong) {
		case 'a':
		case 'A':
			phuCap = 100;
			break;
		case 'b':
		case 'B':
			phuCap = 500;
			break;
		case 'c':
		case 'C':
			phuCap = 800;
			break;
		case 'd':
		case 'D':
			phuCap = 2000;
			break;
		default:
			printf("\nBac luong KHONG HOP LE...");
			phuCap = 0;
			break;
	}
	printf("\n*** PHIEU LUONG CUA NHAN VIEN ***");
	printf("\nHo va ten: %s", tenNV);
	printf("\nLuong co ban: $%.2f", luongCB);
	printf("\nBac luong: %c", bacLuong);
	printf("\nPhu cap: $%2.f", phuCap);
	printf("\n*** LUONG ***");
	printf("\nLuong thuc lanh: $%.2f", luongCB + phuCap);

	getch();
	return 0;
}

