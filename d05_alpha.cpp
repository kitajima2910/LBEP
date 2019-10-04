#include <stdio.h>
#include <conio.h>

int main() {

	char alpha[26];
	for(int i = 65, j = 0; i < 91; ++i, ++j) {
		alpha[j] = i;
	}
	
	printf("\nNoi dung cua bang alpha:\n");
	for(int i = 0; i < 26; ++i) {
		printf("%6i\t%c ------- %i\t%c\n",  (*(alpha + i)), (*(alpha + i)), (*(alpha + i)) + 32, (*(alpha + i)) + 32);
	}

	getch();
	return 0;
}

