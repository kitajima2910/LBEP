#include <stdio.h>
#include <conio.h>

int main() {

	// 1cm = 0.0328 feet = 0.3937 inches
	float cm;
	printf("### CENTIMETERS TO FEET AND INCHES ###\n");
	printf("Enter a number: "); scanf("%f", &cm);
	printf("%.1f cm to %.1f feet", cm, cm * 0.0328);
	printf("\n");
	printf("%.1f cm to %.1f in", cm, cm * 0.3937);
	
	getch();
	return 0;
}

