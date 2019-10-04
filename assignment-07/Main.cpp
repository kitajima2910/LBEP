#include "FunctionCommon.h"

int main() {
	
	int n, x;
	int* arr = NULL;
	char* str = NULL;
	char** name = NULL;
	float* arrF = NULL;
	
	while(1) {
		char* key = menu();
		if(strcmp(key, "Q") == 0 || strcmp(key, "q") == 0) {
			exit(1);
		} else if(strcmp(key, "1") == 0) {
			arr = enterTheArray(&n);
			exportArray(arr, n);
			exportArrayReverse(arr, n);
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "2") == 0) {
			arr = enterTheArray(&n);
			exportArray(arr, n);
			maxAndMin(arr, n);
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "3") == 0) {
			str = enterTheString();
			countVowelAndConsonant(str); // Today is THURSDAY - Semtember, 30th - 2018
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "4") == 0) {
			name = enterTheNames(&n);
			exportNames(name, n);
			name = sortNames(name, n);
			exportNames(name, n);
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "5") == 0) {
			do {
				printf("%s", "Nhap n = "); scanf("%i", &n);
			} while((n < 1) && printf("%s", "\nHay kiem tra lai n > 0...\n"));
			printf("Sum = %i", sumA(n, 1));
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "6") == 0) {
			do {
				printf("%s", "Nhap n = "); scanf("%i", &n);
			} while((n < 1) && printf("%s", "\nHay kiem tra lai n > 0...\n"));
			int sum = sumEvenAndOdd(n);
			printf("(Recursion)Sum = %i", sum);
			printf("\n(Loop)Sum = %i", sumEvenAndOddWithFor(n));
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "7") == 0) {
			do {
				printf("%s", "Nhap n = "); scanf("%i", &n);
			} while((n < 1) && printf("%s", "\nHay kiem tra lai n > 0...\n"));
			int mult = factorialEvenAndOdd(n);
			printf("(Recursion)Factorial = %i", mult);
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "8") == 0) {
			checkNumberCube();
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "9") == 0) {
			arrF = enterTheArrayF(&n);
			exportArray(arrF, n);
			checkArrASCDEC(arrF, n);
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "10") == 0) {
			arr = enterTheArray(&n);
			exportArray(arr, n);
			printf("%s", "\nNhap x = "); scanf("%i", &x);
			printf("\nCo %i phan tu %i trong mang...", checkX(arr, n, x), x);
			puts(GETCH_VN);
			getch();
		} else if(strcmp(key, "11") == 0) {
			arr = enterTheArray(&n);
			exportArray(arr, n);
			int* tmpArr = newArr(arr, &n);
			exportArray(tmpArr, n);
			puts(GETCH_VN);
			getch();
		}
	}
	
	free(arrF);
	free(name);
	free(str);
	free(arr);
	getch();
	return 0;
}

