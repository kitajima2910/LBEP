#include "LibraryCommon.h"
#include "ConstCommon.h"

int* newArr(int*);
int checkX(int*, int, int);
void exportArray(float*, int);
float* enterTheArrayF(int*);
void checkArrASCDEC(float*, int);
int checkArrASC(float*, int);
int checkArrDEC(float*, int);
void checkNumberCube();
int numberCube(int, int);
int factorialEvenAndOdd(int);
int factorialOdd(int, int);
int factorialEven(int, int);
int sumEvenAndOddWithFor(int);
int sumEvenAndOdd(int);
int sumEven(int, int);
int sumOdd(int, int);
int sumA(int, int);
char** sortNames(int);
void exportNames(char*);
char** enterTheNames(char* str, int* n);
char* enterTheString();
void countVowelAndConsonant(char*);
int checkVowel(int*);
void exportArrayReverse(int*, int);
char* menu();
void exportArray(int*, int);
int* enterTheArray(int*);
void maxAndMin(int*, int);

int* newArr(int* arr, int* n) {
	for (int i = 0; i < (*n) - 1; i++) {
		for (int j = i + 1; j < (*n); j++) {
			if (*(arr + i) == *(arr + j)) {
				int index = j;
				for(int k = index + 1; k < (*n); k++) {
					*(arr + k-1) = *(arr + k);
				}
				(*n)--;
			}
		}
	}
	return arr;
}

int checkX(int* arr, int n, int x) {
	int count = 0;
	for(int i = 0; i < n; ++i) {
		if(x == *(arr + i)) {
			count++;
		}
	}
	return count;
}

void checkArrASCDEC(float* arr, int n) {
	printf("%s", "\n >>>: \n");
	if(checkArrASC(arr, n) == 1) {
		printf("%s", "\tTANG DAN");
	} else if(checkArrDEC(arr, n) == 1) {
		printf("%s", "\tGIAM DAN");
	} else {
		printf("%s", "\tKHONG TANG - KHONG GIAM");
	}
}

int checkArrASC(float* arr, int n) {
	int flag = 1;
	for(int i = 0; i < n-1; ++i) {
		if(*(arr + i + 1) < *(arr + i)) {
			flag = 0;
		}
	}
	return flag;
}

int checkArrDEC(float* arr, int n) {
	int flag = 1;
	for(int i = 0; i < n-1; ++i) {
		if(*(arr + i + 1) > *(arr + i)) {
			flag = 0;
		}
	}
	return flag;
}

void checkNumberCube() {
	printf("%s", "\n(Recursion)a^3 + a^3 + c^3: ");
	for(int i = 100; i <= 999; ++i) {
		if(numberCube(i, 0) == i) {
			printf(" %i ", i);
		}
	}
	printf("%s", "\n(Loop)a^3 + a^3 + c^3: ");
	for(int i = 100; i <= 999; ++i) {
		int a = i % 10; // 123 % 10 = 3
		int b = (i / 10) % 10; // (123 / 10) % 10 = 12 % 10 = 2
		int c = (i / 100) % 10; // (123 / 100) % 10 = 1 % 10 = 1
		if(((a * a * a) + (b * b * b) + (c * c * c)) == i) {
			printf(" %i ", i);
		}
	}
}

int numberCube(int n, int s) {
	if(n == 0) {
		return s;
	}
	return numberCube(n / 10, s + (int)pow((n % 10), 3.0));
}

int factorialEvenAndOdd(int n) {
	return (n % 2 == 0) ? factorialEven(n, 2) : factorialOdd(n, 1);
}

int factorialOdd(int n, int m) {
	if(n == 1) {
		return m;
	}
	return factorialOdd(n - 2, m * n);
}

int factorialEven(int n, int m) {
	if(n == 2) {
		return m;
	}
	return factorialEven(n - 2, m * n);
}

int sumEvenAndOddWithFor(int n) {
	int startI = 1, sum = 0;
	if(n % 2 == 0) {
		startI = 2;
	}
	for(int i = startI; i <= n; i = i + 2) {
		sum = sum + i;
	}
	return sum;
}

int sumEvenAndOdd(int n) {
	return (n % 2 == 0) ? sumEven(n, 2) : sumOdd(n, 1);
}

int sumEven(int n, int s) {
	if(n == 2) {
		return s;
	}
	return sumEven(n - 2, s + n);
}

int sumOdd(int n, int s) {
	if(n == 1) {
		return s;
	}
	return sumOdd(n - 2, s + n);
}

int sumA(int n, int s) {
	if(n == 1) {
		return s;
	}
	return sumA(n - 1, s + n);
}

char** sortNames(char** str, int n) {
	printf("\n\n\t       %s", SORT_STUDENT);
	printf("\n\t   %s", SORT_STUDENT_VN);
	printf("\nDang sach sinh vien duoc sap xep:");
	char* tmpName = (char*)calloc(n, sizeof(char));
	for(int i = 0; i < n-1; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(strcmp(str[i], str[j]) > 0) {
				strcpy(tmpName, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], tmpName);
			}
		}
	}
	return str;
}

void exportNames(char** str, int n) {
	printf("\nDang sach sinh vien:");
	for(int i = 0; i < n; ++i) {
		printf("\n%s", *(str + i));
	}
}

char** enterTheNames(int* n) {
	do {
		printf("%s", "Nhap so luong sinh vien: ");
		scanf("%i", n);
	}while((*n < 2 || *n > 10) && printf("\nHay kiem tra lai n[2-10]...\n"));
	
	fflush(stdin);
	char** str = (char**)calloc(*n, sizeof(char*));
	for(int i = 0; i < *n; ++i) {
		str[i] = (char*)calloc(*n, sizeof(char));
		printf("Ten sinh vien thu %i: ", i + 1);
		gets(*(str + i));
	}
	return str;
}

char* enterTheString() {
	char* str = (char*)calloc(256, sizeof(char));
	printf("%s", "Nhap chuoi: ");
	gets(str);
	return str;
}

int checkVowel(char arr) {	
	if((arr >= 'a' && arr <= 'z') || (arr >= 'A' && arr <= 'Z')) {
		switch(arr) {
			case 'a': case 'i': case 'u': case 'e': case 'o':
			case 'A': case 'I': case 'U': case 'E': case 'O':
				return 1;
				break;
			default:
				return 0;
				break;
		}
	}
}

void countVowelAndConsonant(char* arr) {
	int na, pa;
	na = pa = 0;
	printf("\n\n\t  %s", VOWEL_AND_CONSONANT);
	printf("\n\t   %s", VOWEL_AND_CONSONANT_VN);
	printf("\nDo dai chuoi nhap vao la %i", strlen(arr));
	for(int i = 0; i < strlen(arr); ++i) {
		if(checkVowel(*(arr + i)) == 1) {
			na++;
		} else if(checkVowel(*(arr + i)) == 0) {
			pa++;
		}
	}
	printf("\nNguyen am: %i", na);
	printf("\nPhu am: %i", pa);
}

void exportArrayReverse(int* arr, int n) {
	printf("\n\n\t  %s", ARRAY_REVERSE);
	printf("\n\t   %s", ARRAY_REVERSE_VN);
	printf("%s", "\nDanh sach duoc xu ly: \n");
	for(int i = n-1; i >= 0; --i) {
		printf(" %i ", *(arr + i));
	}
}

char* menu() {
	system("cls");
	printf("\n\t ASSIGNMENT 07");
	printf("\n\t (BAI TAP 07)");
	printf("\n 1 . Hien thi mang dao nguoc[Array]");
	printf("\n 2 . Tim so be nhat, lon nhat[Array]");
	printf("\n 3 . Dem nguyen am, phu am[String]");
	printf("\n 4 . Sap xep ten sinh vien[String]");
	printf("\n 5 . S = 1+2+3+4+5+...+n, voi n > 0[Loop]");
	printf("\n 6 . Tinh tong le hay chan dua vao n voi n > 0[Loop]");
	printf("\n     (S = 1+3+5+...+n, S = 2+4+6+...+n)");
	printf("\n 7 . Tinh giai thua le hay chan dua vao n voi n > 0[Loop]");
	printf("\n     (S = 1x3x5x...xn, S = 2x4x6x...xn)");
	printf("\n 8 . abc = 100a + 10b + c = a^3 + b^3 + c^3[Loop]");
	printf("\n 9 . Kiem tra day tang, giam cua mang[Array]");
	printf("\n 10. Dem phan tu x co trong mang[Array]");
	printf("\n 11. Hien thi phan tu khac nhau[Array]");
	printf("\n Q. Thoat!");
	printf("\n Lua chon[0-11]: ");
	
	char* key = (char*)calloc(256, sizeof(char));
	gets(key);
	return key;
}

void exportArray(float* arr, int n) {
	printf("%s", "\nDanh sach cac gia tri vua nhap: \n");
	for(int i = 0; i < n; ++i) {
		printf(" %g ", *(arr + i));
	}
}

void exportArray(int* arr, int n) {
	printf("%s", "\nDanh sach cac gia tri vua nhap: \n");
	for(int i = 0; i < n; ++i) {
		printf(" %i ", *(arr + i));
	}
}

float* enterTheArrayF(int* n) {
	do {
		printf("%s", "Nhap gia tri n[2-10]: ");
		scanf("%i", n);
	}while((*n < 2 || *n > 10) && printf("%s", "\nHay nhap gia tri n[2-10]...\n"));
	
	float* arr = (float*)calloc(*n, sizeof(float));
	for(int i = 0; i < *n; ++i) {
		printf("Nhap arr[%i]: ", i);
		scanf("%f", arr + i);
	}
	return arr;
}

int* enterTheArray(int* n) {
	do {
		printf("%s", "Nhap gia tri n[2-10]: ");
		scanf("%i", n);
	}while((*n < 2 || *n > 10) && printf("%s", "\nHay nhap gia tri n[2-10]...\n"));
	
	int* arr = (int*)calloc(*n, sizeof(int));
	for(int i = 0; i < *n; ++i) {
		printf("Nhap arr[%i]: ", i);
		scanf("%i", arr + i);
	}
	return arr;
}

void maxAndMin(int* arr, int n) {
	
	int max, min;
	max = min = *arr;
	printf("\n\n\t  %s", MAX_AND_MIN);
	printf("\n\t%s", MAX_AND_MIN_VN);
	for(int i = 1; i < n; ++i) {
		max = *(arr + i) > max ? *(arr + i) : max;
		min = *(arr + i) < min ? *(arr + i) : min;
	}
	
	printf("\nSo lon nhat la %i", max);
	printf("\nSo nho nhat la = %i", min);
	
}

