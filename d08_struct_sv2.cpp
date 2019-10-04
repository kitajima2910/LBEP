#include <stdio.h>
#include <conio.h>
#include <string.h>

void nhapDS(struct SinhVien ds[], int n);
void xuatDS(struct SinhVien ds[], int n);

struct SinhVien {
	int maSo;
	char hoTen[31];
	int namSinh;
	char email[31];
	float diem;
};

int main() {

	int n;
	printf("\n\t NHAP THONG TIN SINH VIEN ");
	do{
		printf("\n Nhap so sinh vien[2-10]: ");
		scanf("%d", &n);
	} while((n < 2 || n > 10) && printf("\n Hay kiem tra lai n[2-10]..."));

	struct SinhVien ds[n];
	
	nhapDS(ds, n);
	xuatDS(ds, n);

	getch();
	return 0;
}

void nhapDS(struct SinhVien ds[], int n) {
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

void xuatDS(struct SinhVien ds[], int n) {
	printf("\n %-7s %-30s %-15s %-30s %-7s", "Ma So", "Ho Ten", "Nam Sinh", "Email", "Diem");
	for(int i = 0; i < n; i++) {
		printf("\n %-7d %-30s %-15d %-30s %-7.2f", ds[i].maSo, ds[i].hoTen, ds[i].namSinh, ds[i].email, ds[i].diem);
	}
}

