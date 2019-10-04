#include <stdio.h>
#include <conio.h>

int main() {
	
	int x, y;
	x = 5001;
	y = 600;
	if(x < 2000 | x > 3000) {
		printf("\nx = %d", x);	
	}
	if(y >= 100 && y <= 500) {
		printf("\n%d", y);
	}

	getch();
	return 0;
}

