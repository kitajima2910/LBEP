/* Khai bao thu vien */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/* Khoi tao bo nho mac dinh */
#define MAX 100
#define ENROLLMENINO 6
#define FULLNAME 51
#define PHONE 11

typedef struct STUDENT {
	char enrollmentNo[ENROLLMENINO];
	char fullName[FULLNAME];
	char phone[PHONE];
} Student;

/* Khai bao bien global*/
Student sv[MAX];
int n = 0;

/* Khai bao cac ham */
char* menu();
void inputStudent(Student sv[]);
void outputStudent(Student sv[]);
int checkEnrollmentNo(Student sv[], char* enrollmentNo);
void saveFile(Student sv[]);
void readFile();

/* Ham chinh */
int main() {
	
	/* Xu ly lap */
	while(1) {
		char* opt = menu();
		if(strcmp(opt, "1") == 0) {
			inputStudent(sv);
			_getch();
		} else if(strcmp(opt, "2") == 0) {
			outputStudent(sv);
			_getch();
		} else if(strcmp(opt, "3") == 0) {
			saveFile(sv);
			_getch();
		} else if(strcmp(opt, "4") == 0) {
			readFile();
			_getch();
		} else if(strcmp(opt, "5") == 0) {
			printf("\n Chao tam biet!");
			exit(1);
		} else {
			printf("\n Vui long chon lai [1-5]...");
			_getch();
		}
	}

	_getch();
	return 0;
}

/* Ham hien thi menu */
char* menu() {
	system("cls");
	printf("\n *******************MENU*************************");
	printf("\n *\t1. Them moi sinh vien.\t\t\t*");
	printf("\n *\t2. Hien thi danh sach sinh vien.\t*");
	printf("\n *\t3. Luu danh sach sinh vien ra file.\t*");
	printf("\n *\t4. Doc danh sach sinh vien tu file.\t*");
	printf("\n *\t5. Thoat chuong trinh.\t\t\t*");
	printf("\n ************************************************");
	printf("\n Lua chon[1-5]: ");
	
	char* opt = (char*)calloc(256, sizeof(char));
	gets(opt);
	
	return opt;
}

/* Ham nhap du lieu */
void inputStudent(Student sv[]) {
	if(n == 10) {
		printf("\n Danh sach sinh vien da day...");
		return;
	}
	printf("\n Nhap thong tin sinh vien: \n");
	do {
		printf(" Nhap ma sinh vien: "); gets(sv[n].enrollmentNo);
		if(checkEnrollmentNo(sv, sv[n].enrollmentNo) == 1) {
			printf("\n Ma sinh vien trung...\n");
			continue;
		}
		if(strlen(sv[n].enrollmentNo) != 5) {
			printf("\n Nhap lai ma sinh vien...\n");
			continue;
		}
		break;
	} while(1);
	
	do {
		printf(" Nhap ten: "); gets(sv[n].fullName);
		if(strlen(sv[n].fullName) == 0) {
			printf("\n Ten sinh vien khong duoc de trong...\n");
			continue;
		}
		break;
	} while(1);
	
	do {
		printf(" Nhap so dien thoai: "); gets(sv[n].phone);
		if(strlen(sv[n].phone) != 10) {
			printf("\n So dien thoai khong du 10 so...\n");
			continue;
		}
		break;
	} while(1);
	
	
	fflush(stdin);
	
	++n;
}

/* Kiem tra ma sinh vien trung */
int checkEnrollmentNo(Student sv[], char* enrollmentNo) { 
	int i;
	for(i = 0; i < n; i++) {
		if(strcmp(sv[i].enrollmentNo, enrollmentNo) == 0) {
			return  1;
		}
	}
	
	return -1;
}


/* Ham xuat du lieu */
void outputStudent(Student sv[]) {
	if(n == 0) {
		printf("\n Danh sach sinh vien chua co...");
		return;
	}
	int i;
	printf("\n %-10s \t%-3s %-18s \t%-3s %-25s", "Ma sinh vien.", "|", "Ten", "|", "So dien thoai");
	for(i = 0; i < n; i++) {
		printf("\n %-10s \t%-3s %-18s \t%-3s %-25s", sv[i].enrollmentNo, "|", sv[i].fullName, "|", sv[i].phone);
	}
	printf("\n");
}

/* Luu danh sach sinh vien */
void saveFile(Student sv[]) {
	if(n == 0) {
		printf("\n Danh sach sinh vien chua co...");
		return;
	}
	
   	FILE* fptr;
   	fptr = fopen("danhsachsinhvien.txt", "w");
 
   	if(fptr == NULL)
   	{
    	printf("Loi...");   
    	return;           
	}

	int i;
   	fprintf(fptr, "%-10s \t%-3s %-18s \t%-3s %-25s", "Ma sinh vien.", "|", "Ten", "|", "So dien thoai");
   	for(i = 0; i < n; i++) {
		fprintf(fptr, "\n%-10s \t%-3s %-18s \t%-3s %-25s", sv[i].enrollmentNo, "|", sv[i].fullName, "|", sv[i].phone);
	}
   
   	fclose(fptr);
   	
   	printf("\n Luu thong tin sinh vien vao file danhsachsinhvien.txt");
}


/* Luu danh sach sinh vien */
void readFile() {
	FILE *fptr;
 
	if ((fptr = fopen("danhsachsinhvien.txt", "r")) == NULL) {
       printf("Loi mo file...");
       return;
   	}
   	
	int c;
	while(1) {
		c = fgetc(fptr);
		if(feof(fptr)) {
			break;
		}
		printf("%c", c);
	}
	
   fclose(fptr); 
}

