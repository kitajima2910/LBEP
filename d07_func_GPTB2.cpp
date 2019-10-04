#include <stdio.h>
#include <conio.h>
#include <math.h>

// ax^2 + bx + c = 0
int giaiPhuongTrinhBacHai(float, float, float, float &, float &);

int main() {

	float a, b, c, x1, x2;
	scanf("%f%f%f", &a, &b, &c);
	
	int key = giaiPhuongTrinhBacHai(a, b, c, x1, x2);
	if(key == 0) {
		printf("\n Phuong trinh vo nghiem");
	} else if(key == 1) {
		printf("\n Phuong trinh co nghiem kep: \n x1 = x2 = %.2f", x1);
	} else {
		printf("\n Phuong trinh co 2 nghiem: \n x1 = %.2f\n x2 = %.2f", x1, x2);
	}
	
	getch();
	return 0;
}

int giaiPhuongTrinhBacHai(float a, float b, float c, float &x1, float &x2) {
	float delTa = b * b - 4 * a * c;
	if(delTa < 0) {
		return 0;
	}
	if(delTa == 0) {
		x1 = x2 = -b/(2*a);
		return 1;
	}
	if(delTa > 0) {
		x1 = (-b - sqrt(delTa)) / (2 * a);
		x2 = (-b + sqrt(delTa)) / (2 * a);
		return 2;
	}
}

