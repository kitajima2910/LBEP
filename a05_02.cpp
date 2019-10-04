#include <stdio.h>
#include <conio.h>

int main() {

	printf("Nhap ki tu: ");
	char ch = getche();
	
	if(ch >= 'a' && ch <= 'z'){
		printf("\n%c:%d -> %c:%d", ch, ch, ch - 32, ch - 32);
	} else if(ch >= 'A' && ch <= 'Z') {
		printf("\n%c:%d -> %c:%d", ch, ch, ch + 32, ch + 32);
	} else {
		printf("\n%c:%d ki tu khong nam trong [a-zA-Z]", ch, ch);
	}
	
	getch();
	return 0;
}

