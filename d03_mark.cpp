#include <stdio.h>
#include <conio.h>

int main() {
	
	int mark;
	printf("### MARK ###\n");
	printf("Enter a mark[0-100]: "); scanf("%i", &mark);
	if(mark > 100 || mark < 0) {
		printf("%d?? [0-100] WTF?", mark);
	} else {
		if(mark >= 90) {
			printf("%d is perfect (A)", mark);
		} else if(mark >= 80) {
			printf("%d is great (B)", mark);
		} else if(mark >= 65) {
			printf("%d is good (C)", mark);
		} else {
			printf("%d is bad (D)", mark);
		}
	}

	getch();
	return 0;
}

