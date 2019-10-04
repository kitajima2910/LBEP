#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct SinhVien {
	int maSo;
	char hoTen[31];
	int namSinh;
	char email[31];
	float diem;
} SinhVien;

void nhapDS(SinhVien ds[], int n);
void xuatDS(SinhVien ds[], int n);
void sapXepTheoNamSinh(SinhVien ds[], int n);

int main() {

	int n;
	printf("\n\t NHAP THONG TIN SINH VIEN ");
	do{
		printf("\n Nhap so sinh vien[2-10]: ");
		scanf("%d", &n);
	} while((n < 2 || n > 10) && printf("\n Hay kiem tra lai n[2-10]..."));

	SinhVien ds[n];
	
	nhapDS(ds, n);
	printf("\n\t THONG TIN SINH VIEN ");
	xuatDS(ds, n);
	sapXepTheoNamSinh(ds, n);
	printf("\n\t THONG TIN SINH VIEN DA DUOC SAP XEP ");
	xuatDS(ds, 2);

	getch();
	return 0;
}

void nhapDS(SinhVien ds[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\n Nhap sinh vien thu %d: ", i + 1);
		printf("\n Nhap ma so: "); scanf("%d", &ds[i].maSo);
		fflush(stdin);
		printf(" Nhap ho ten: "); gets(ds[i].hoTen);
		printf(" Nhap nam sinh: "); scanf("%d", &ds[i].namSinh);
		fflush(stdin);
		printf(" Nhap email: "); gets(ds[i].email);
		printf(" Nhap diem thi: "); scanf("%f", &ds[i].diem);
	}
}

void xuatDS(SinhVien ds[], int n) {
	printf("\n %-7s %-30s %-15s %-30s %-7s", "Ma So", "Ho Ten", "Nam Sinh", "Email", "Diem");
	for(int i = 0; i < n; i++) {
		printf("\n %-7d %-30s %-15d %-30s %-7.2f", ds[i].maSo, ds[i].hoTen, ds[i].namSinh, ds[i].email, ds[i].diem);
	}
	printf("\n");
}

void sapXepTheoNamSinh(SinhVien ds[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(ds[i].namSinh < ds[j].namSinh) {
				SinhVien tmpDS = ds[i];
				ds[i] = ds[j];
				ds[j] = tmpDS;
			}
		}
	}
}

