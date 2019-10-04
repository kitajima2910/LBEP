#include <stdio.h>
#include <conio.h>
#define PI 3.14

float circlePerimeter(float);
float circleArae(float);

int main() {

	float r;
	printf("### ARAE AND PERIMETER OF A CIRCLE ###");
	printf("\nEnter r: "); scanf("%f", &r);
	printf("S = %.2f x %.2f x 3.14 = %.2f", r, r, circleArae(r));
	printf("\nP = 2 x %.2f x 3.14 = %.2f", r, circlePerimeter(r));

	getch();
	return 0;
}


float circlePerimeter(float r) {
	return 2 * r * PI;
}

float circleArae(float r) {
	return r * r * PI;
}

