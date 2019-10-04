#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct STUDENT {
	char maSo[11];
	char hoTen[51];
	char chuongTrinhHoc[51];
	int namThamGia;
} Student;

void nhapSinhVien(Student sv[], int n);
void xuatSinhVien(Student sv[], int n);
int timKiemNamThamGia(Student sv[], int n, int namThamGia);
void timKiemMaSo(Student sv[], int n, char maSo[]);

int main() {

	printf("\n\t NHAP LIEU THONG TIN SINH VIEN ");
	int n;
	do {
		printf("\n Nhap n sinh vien: "); scanf("%d", &n);
	} while(n < 1 && printf("\n Kiem tra lai n > 1..."));
	fflush(stdin);
	
	Student sv[n];
	nhapSinhVien(sv, n);
	printf("\n\t THONG TIN SINH VIEN ");
	xuatSinhVien(sv, n);
	
	int namThamGia;
	printf("\n Nhap nam tham gia: "); scanf("%d", &namThamGia);
	fflush(stdin);
	printf("\n\t TIM SINH VIEN THEO NAM THAM GIA ");
	printf("\n Co %d sinh vien tham gia %d...", timKiemNamThamGia(sv, n, namThamGia), namThamGia);
	
	char maSo[11];
	printf("\n Nhap ma so: "); gets(maSo);
	printf("\n\t TIM SINH VIEN THEO MA SO ");
	timKiemMaSo(sv, n, maSo);
	
	getch();
	return 0;
}

void nhapSinhVien(Student sv[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\n Nhap sinh vien thu %d: \n", i + 1);
		printf(" Nhap ma so: "); gets(sv[i].maSo);
		printf(" Nhap ho ten: "); gets(sv[i].hoTen);
		printf(" Nhap ten chuong trinh hoc: "); gets(sv[i].chuongTrinhHoc);
		printf(" Nam tham gia: "); scanf("%d", &sv[i].namThamGia);
		fflush(stdin);
	}
}

void xuatSinhVien(Student sv[], int n) {
	printf("\n %-7s %-25s %-25s %-7s", "Ma so", "Ho va ten", "Ten chuong trinh", "Nam");
	for(int i = 0; i < n; i++) {
		printf("\n %-7s %-25s %-25s %-7d", sv[i].maSo, sv[i].hoTen, sv[i].chuongTrinhHoc, sv[i].namThamGia);
	}
}

int timKiemNamThamGia(Student sv[], int n, int namThamGia) {
	int dem = 0;
	printf("\n %-7s %-25s %-25s %-7s", "Ma so", "Ho va ten", "Ten chuong trinh", "Nam");
	for(int i = 0; i < n; i++) {
		if(namThamGia == sv[i].namThamGia) {
			printf("\n %-7s %-25s %-25s %-7d", sv[i].maSo, sv[i].hoTen, sv[i].chuongTrinhHoc, sv[i].namThamGia);
			dem++;
		}
	}
	return dem;
}

void timKiemMaSo(Student sv[], int n, char maSo[]) {
	int dem = 0;
	printf("\n %-7s %-25s %-25s %-7s", "Ma so", "Ho va ten", "Ten chuong trinh", "Nam");
	for(int i = 0; i < n; i++) {
		if(strcmp(sv[i].maSo, maSo) == 0) {
			printf("\n %-7s %-25s %-25s %-7d", sv[i].maSo, sv[i].hoTen, sv[i].chuongTrinhHoc, sv[i].namThamGia);
			dem++;
			break;
		}
	}
	
	if(dem == 0) {
		printf("\n Khong co ma so %s cua sinh vien nay...", maSo);
	}
	
}

