#include <stdio.h>
#include <conio.h>

int main() {

	char tenFile[31] = "baihat.txt";
	FILE *f;
	
	f = fopen(tenFile, "w");
	
	fputs("Bai hat SONG GIO \n", f);
	fputs("Hong tran tren doi canh tay \n", f);
	fputs("Hoa doi em trong phut giay \n", f);
	fputs("Tu ngay tho ay con ngu mo \n", f);
	fputs("Den khi em tho o o \n", f);
	
	fclose(f);
	
	printf("\n Done...");

	getch();
	return 0;
}

