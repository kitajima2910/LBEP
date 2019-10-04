#include <stdio.h>
#include <conio.h>

int main() {
	char ten[31];
	char tenClone[31];
	int a;
	printf("\nTest buffer: "); scanf("%d", &a);
	printf("\nNhap ho va ten 1: "); // scanf("%s", ten); // ket thuc bang khoang trang va enter <= thay gets()
	fflush(stdin); // <== xoa bo nho dem buffer
	gets(ten);
	printf("%s", ten);
	printf("\nNhap ho va ten 2: ");
	gets(tenClone);
	printf("%s", tenClone);
	
	char ch;
	printf("\nNhap ch: ");
	int saveCh = getchar();
	printf("\n%c -> %d", saveCh, saveCh);
	
	/*
	int a, b, c;
	int sum = 0;
	printf("Enter a: "); scanf("%d", &a);
	printf("Enter b: "); scanf("%d", &b);
	printf("Enter c: "); scanf("%d", &c);
	sum = a + b + c;
	printf("\nSum: %d", sum);
	printf("\nAverage: %.2f", sum / 3.0);
	*/
	/* 
		getchar() <== ket thuc bang phim enter va hien thi 1 ki tu(cac ki tu con lai luu o bo nho dem)
		getche()  <== hien thi 1 ki tu
		getch()   <== khong hien thi 1 ki tu
	*/
/*
//	int a = getch();
//	int b = getche();
	int c = getchar();
	putchar(c);
	c = getchar();
	putchar(c);
	c = getchar();
	putchar(c);
	c = getchar();
	putchar(c);
*/
	getch();	
	return 0;
}

