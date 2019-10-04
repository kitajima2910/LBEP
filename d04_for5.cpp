#include <stdio.h>
#include <conio.h>

int main() {	
//	int row, col;
//	printf("Enter rows: "); scanf("%d", &row);
//	printf("Enter cols: "); scanf("%d", &col);
//	
//	for(int i = 1; i <= row; i++) {
//		for(int j = 1; j <= col; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//	printf("\n");
//	for(int i = 1; i <= row; i++) {
//		for(int j = 1; j <= i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
	
//	printf("\n");
//	int n = 20;
//	int sum = 0;
//	for(int i = 1; i <= n; i++) {
//		if(n % i == 0) {
//			printf("%3d", i);
//			sum = sum + i;
//		}
//	}
//	printf("\nSum = %d", sum);
	
	int n = 9;
	int tmp = n + 1;
	printf("\nHinh 1:\n");
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(j >= tmp - i) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nHinh 2:\n");
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(j <= tmp - i) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nHinh 3:\n");
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(j >= i) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	/*
		  
		1	  *           
		2	 **          
		3   ***			
		4  ****		   
	    5 *****       
		  
	     *****
	     ****
	     ***
	     **
	     *
	     
	     *****
	      ****
	       ***
	        **
	         *
	*/

	getch();
	return 0;
}

