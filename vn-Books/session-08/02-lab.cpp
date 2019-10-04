#include <stdio.h>
#include <conio.h>

int main() {

	switch(getche()) {
		case 'a': case 'A':
			printf("\nAda");
			break;
		case 'b': case 'B':
			printf("\nBasic");
			break;
		case 'c': case 'C':
			printf("\nCOBAL");
			break;
		case 'd': case 'D':
			printf("\ndBASE III");
			break;
		case 'f': case 'F':
			printf("\nFortran");
			break;
		case 'p': case 'P':
			printf("\nPascal");
			break;
		case 'v': case 'V':
			printf("\nVisual C++");
			break;
		default:
			printf("\n....");
			break;
	}

	getch();
	return 0;
}

