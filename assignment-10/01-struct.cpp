#include <stdio.h>
#include <conio.h>

typedef struct PRODUCT {
	char maSo[11];
	char tenSanPham[51];
	int donGia;
	int soLuong;
} Product;

void nhapSanPham(Product p[], int n);
void xuatSanPham(Product p[], int n);

int main() {
	
	printf("\n\t NHAP LIEU SAN PHAM ");
	int n;
	do {
		printf("\n Nhap n san pham: "); scanf("%d", &n);
	} while(n < 1 && printf("\n Kiem tra lai n > 0..."));
	fflush(stdin);
	
	Product p[n];
	nhapSanPham(p, n);
	printf("\n\t THONG TIN SAN PHAM ");
	xuatSanPham(p, n);

	getch();
	return 0;
}

void nhapSanPham(Product p[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\n Nhap san pham thu %d: \n", i + 1);
		printf(" Nhap ma so: "); gets(p[i].maSo);
		printf(" Nhap ten san pham: "); gets(p[i].tenSanPham);
		printf(" Nhap don gia: "); scanf("%d", &p[i].donGia);
		printf(" Nhap so luong: "); scanf("%d", &p[i].soLuong);
		fflush(stdin);
	}
}

void xuatSanPham(Product p[], int n) {
	
	int tong = 0;
	printf("\n Bao cao ton kho");
	printf("\n %-10s %-25s %-10s %-10s %-10s", "Ma so", "Ten san pham", "Don gia", "So luong", "Tri gia");
	for(int i = 0; i < n; i++) {
		printf("\n %-10s %-25s %7d %11d %9d", p[i].maSo, p[i].tenSanPham, p[i].donGia, p[i].soLuong, p[i].donGia * p[i].soLuong);
		tong = tong + p[i].donGia * p[i].soLuong;
	}
	printf("\n\t\t\t\t\t\tTong gia tri: %5d", tong);
}

