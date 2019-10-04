#include <stdio.h>
#include <conio.h>

int main() {

	int a = 10, b = 3;
	float c = (float)a/ b;
	printf("\n%d/%d = %f", a, b , c);
	printf("\n%d", sizeof(c));
	printf("\n%d", sizeof(3.0));
	printf("\n%d", sizeof(3.0f));

	getch();
	return 0;
}

