#include <stdio.h>
#include <conio.h>

int main() {

	char tenFile[31] = "baihat.txt";
	FILE *f;
	
	f = fopen(tenFile, "r");
	
	fseek(f, 0, 2);
	long n = ftell(f);
	printf("Size file: %d \n", n);
	
	fseek(f, 0, 0);
	char c;
	for(long i = 0; i < n; i++) {
		c = fgetc(f);
		putchar(c);
	}
	
	fclose(f);

	getch();
	return 0;
}

