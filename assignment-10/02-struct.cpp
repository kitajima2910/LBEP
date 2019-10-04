#include <stdio.h>
#include <conio.h>

typedef struct STUDENT {
	char hoTen[51];
	float diem;
} Student;

void nhapSinhVien(Student sv[], int n);
void xuatSinhVien(Student sv[], int n);
void sapXepSinhVienTheoDiem(Student sv[], int n);

int main() {
	
	printf("\n\t NHAP LIEU THONG TIN SINH VIEN ");
	int n;
	do {
		printf("\n Nhap n sinh vien: "); scanf("%d", &n);
	} while(n < 1 && printf("\n Kiem tra n > 1..."));
	fflush(stdin);

	Student sv[n];
	nhapSinhVien(sv, n);
	printf("\n\t THONG TIN SINH VIEN"); 
	xuatSinhVien(sv, n);
	sapXepSinhVienTheoDiem(sv, n);
	printf("\n\t THONG TIN TOP 3 SINH VIEN"); 
	xuatSinhVien(sv, 3);

	getch();
	return 0;
}

void nhapSinhVien(Student sv[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\n Nhap sinh vien thu %d: \n", i + 1);
		printf(" Nhap ten: "); gets(sv[i].hoTen);
		printf(" Nhap diem: "); scanf("%f", &sv[i].diem);
		fflush(stdin);
	}
}

void xuatSinhVien(Student sv[], int n) {
	printf("\n %-25s %-10s", "Ten sinh vien", "Diem thi");
	for(int i = 0; i < n; i++) {
		printf("\n %-25s %-10.2f", sv[i].hoTen, sv[i].diem);
	}
}

void sapXepSinhVienTheoDiem(Student sv[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = i+1; j < n; j++) {
			if(sv[i].diem < sv[j].diem) {
				Student tmpSV = sv[i];
				sv[i] = sv[j];
				sv[j] = tmpSV;
			}
		}
	}
}

