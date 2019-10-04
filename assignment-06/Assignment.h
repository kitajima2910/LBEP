/* library declaration */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "ConstCommon.h"

/* function declaration */
void printEvenNumber(const char*, int);
void displayPyramid(int);
void charEOF();
void zeroEnd();
void displayStrLen();
unsigned long int factorialRecursion(int);
double factorialFor(int);
void displayPattern(int);
void multiplicationTable();
void doTryYourself(int, int, int);

/* function definition */
/*
 * do try yourself
 */
void doTryYourself(int number1, int number2, int p) {
	int i;
	puts(DO_TRY);
	for(i = 100; i >= 5; i = i - 5) {
		printf("%5d", i);
	}
	puts(SUM_OF_ODD_NUM1_NUM2);
	int startNumber, j, temp, total = 0;
	if(number1 > number2) {
		temp = number1;
		number1 = number2;
		number2 = number1;
	}
	startNumber = number1;
	if(number1 % 2 == 0) {
		startNumber++;
	}
	for(j = startNumber; j <= number2; j = j + 2) {
		printf("%3d", j);
		total = total + j;
	}
	printf("\nTotal: %d", total);
	printf("\n");
	puts(DISP_PATTERN_DO_TRY_YOURSELF);
	int m, n;
	int tmp = p + 1;
	for(m = 1; m <= p; ++m) {
		for(n = 1; n <= p; ++n) {
			if(n <= tmp - m) {
				printf("%d", n);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	/*   			j
	   	1 12345		j <= 5		j <= 6-i
		2 1234		j <= 4	
		3 123		j <= 3		
		4 12		j <= 2
		5 1			j <= 1
	*/
	puts(DO_TRY_YOURSELF_FIBONACCI);
	/*1,1,2,3,5,8,13*/
	int fib1 = 1, fib2 = 1, fib3;
	int k;
	printf("%d %d ", fib1, fib2);
	for(k = 2; k < 20; ++k) {
		fib3 = fib1 + fib2;
		printf("%d ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
}	

/*
 * multiplication table
 */
void multiplicationTable() {
	int i, j;
	puts(MUL_TABLE);
	for(i = 1; i <= 10; ++i) {
		for(j = 2; j <= 9; ++j) {
			printf("%2d x %2d = %2d   ", j, i, j * i);
		}
	}
}

/*
 * display parttern
 * 
 * @param number Number
 */
void displayPattern(int number) {
	int i, j;
	puts(DISP_PATTERN);
	if(number < 5 || number > 25) {
		puts(ERROR);
	} else {
		printf("n = %d\n", number);
		for(i = 1; i <= number; ++i) {
			for(j = 1; j <= number; ++j) {
				if(j <= i) {
					printf("%d", j);
				} else {
					printf(" ");
				}
			}
			printf("\n");
		}	
	}
}

/*
 * factorial 
 *
 * @param number Number
 * return int Double
 */
double factorialFor(int number) {
	int i;
	long double mul = 1;
 	for(i = 1; i <= number; i++) {
 		mul = mul * i;
	}
	return mul;
}

/*
 * factorial 
 *
 * @param number Number
 * return int Integer
 */
unsigned long int factorialRecursion(int number) {
	if(number == 0 || number == 1) {
		return 1;
	}
	return number * factorialRecursion(number - 1);
}
/*
 * display string and length
 */
void displayStrLen() {
	int count = 0;
	int x;
	char ans;
	puts(DISP_STR_LEN);
	do {
		printf("Enter sequence of character: ");
		do {
			x = getchar();
			count++;	
		} while(x != '\n');
		printf("Number of characters entered: %d\n", --count);
		printf("----More sequences (Y/N)? ");
		ans = getche();
		printf("\n\n");
		count = 0;
	}while(ans == 'y' || ans == 'Y');
}

/*
 * zero to end
 */
void zeroEnd() {
	int number;
	puts(ZERO_TO_END);
	do {
		printf("Enter a number: "); scanf("%d", &number);
		printf("No. is %d\n", number);
	}while(number != 0);
}

/*
 * end of file
 */
void charEOF() {
	char ch;
	puts(CHAR_EOF);
	while((ch = getchar()) != EOF) {
		putchar(ch);
	}
}

/*
 * ij01234		i		j	 			j			
 * 0 *	   		0		0				j <= 0
 * 1 **			1		01				j <= 1
 * 2 ***		2		012				j <= 2
 * 3 ****		3		0123			j <= 3
 * 4 *****		4		01234			j <= 4
 * =>	j <= i
 *
 * display pyramid
 * @param number Number
 */
void displayPyramid(int number) {
	int i, j;
	puts(DISPLAY_PYRAMID);
	if(number < 5 || number > 25) {
		puts(ERROR);
	} else {
		printf("n = %d\n", number);
		for(i = 0; i < number; ++i) {
			for(j = 0; j < number; ++j) {
				if(j <= i) {
					printf("*");
				} else {
					printf(" ");
				}
			}
			printf("\n");
		}	
	}
}

/*
 * print even number
 * @param number Number
 */
void printEvenNumber(const char* strTitle, int number) {
	int i;
	puts(PRINT_EVEN_NUMBER);
	if(number < 2 || number > 100) {
		puts(ERROR);
	} else {
		puts(strTitle);
		for(i = 2; i <= number; i = i + 2) {
			printf("%*d", 5, i);
		}	
	}
}

