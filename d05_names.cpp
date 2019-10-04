#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {

	int n;
	do {
		printf("Nhap n = "); scanf("%i", &n);
	}while((n < 2 || n > 10) && printf("\nKiem tra lai n..."));

	/* Nhap ho ten vao mang tenSV */
	char tenSV[n][31];
	fflush(stdin);
	for(int i = 0; i < n; ++i) {
		printf("Nhap ho va ten [%d]: ", i + 1);
		gets(*(tenSV + i));
	}
	
	/* Hien thi danh sach trong mang tenSV */
	printf("\n\nDanh sach ten sinh vien: \n");
	for(int i = 0; i < n; ++i) {
		puts(*(tenSV + i));
	}
	
	/* Sap xep ten abc */
	char tmpTen[31];
	printf("\n\nDanh sach sap xep: \n");
	for(int i = 0; i < n-1; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(strcmp(tenSV[i], tenSV[j]) > 0) {
				strcpy(tmpTen, tenSV[i]);
				strcpy(tenSV[i], tenSV[j]);
				strcpy(tenSV[j], tmpTen);
			}
		}
	}
	
	/* Hien thi danh sach sap xep trong mang tenSV */
	for(int i = 0; i < n; ++i) {
		puts(tenSV[i]);
	}
	
	/* Nhap ten sv can tim kiem */
	char ten[31];
	printf("\n\nNhap ten cua sinh vien: ");
	gets(ten);
	
	/* Hien thi ten sv tim thay */
	int count = 0;
	printf("\n\nDa tim thay: \n");
	for(int i = 0; i < n; ++i) {
		if(strstr(tenSV[i], ten) != NULL) {
			count++;
			printf("%*s  ", 5, tenSV[i]);
		}
	}
	
	/* Hien thi thong bao tim thay hay ko */
	if(count == 0) {
		printf("\nKhong tim thay...");
	} else {
		printf("\nTim thay %d sinh vien", count);
	}
	
	getch();
	return 0;
}

