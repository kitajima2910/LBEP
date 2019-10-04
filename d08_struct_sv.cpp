#include <stdio.h>
#include <conio.h>
#include <string.h>

struct SinhVien {
	int maSo;
	char hoTen[31];
	int namSinh;
	char email[31];
	float diem;
};

int main() {
	
	struct SinhVien sv1, sv2;
	
	sv1.maSo = 100;
	strcpy(sv1.hoTen, "Nguyen A");
	sv1.namSinh = 2002;
	strcpy(sv1.email, "a@hotmail.com");
	sv1.diem = 97.23;
	
	printf("\n\t THONG TIN SINH VIEN");
	printf("\n %-10s %-25s %-10s %-25s %-10s", "Ma So", "Ho Ten", "Nam Sinh", "Email", "Diem");
	printf("\n %-10d %-25s %-10d %-25s %-10.2f", sv1.maSo, sv1.hoTen, sv1.namSinh, sv1.email, sv1.diem);
	
	getch();
	return 0;
}

