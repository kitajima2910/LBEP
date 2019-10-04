#include <stdio.h>
#include <conio.h>

int main() {
	
	int a = 27;
	char name[] = "Xuan Hoai\0 Pham";
	printf("a = %d\na = %o\na = %x\na = %X", a, a, a, a);
	printf("\n%%");
	printf("\n\\\"");
	printf("\n%s", name);
	
	printf("\n%d/%d = %.2f", 27, 2, (float)27 / 2);
	printf("\n%.6s", name);
	int no = 789;
	printf("\n%0*d", 5, no);
	
	getch();
	return 0;
}

