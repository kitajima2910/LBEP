// FPT-Aptech
#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

typedef struct STUDENT {
	char name[51];
	int enrollmentNo;
	float science, math, english;
} Student;

char* menu();
void doQuestion1();
void doAlgorithm(int arr[]);
void doQuestion2();
void doArrayStudent(Student s[], int n);
void doDisplayStudent(Student s[], int n);

int main() {
	
	while(true) {
		char* opt = menu();
		if(strcmp(opt, "1") == 0) {
			doQuestion1();
			getch();
		} else if(strcmp(opt, "2") == 0) {
			doQuestion2();
			getch();
		} else if(strcmp(opt, "3") == 0) {
			exit(1);
		} else {
			printf("\n Invalid, retry with option [1-3]...");
			getch();
		}
	}

	getch();
	return 0;
}

char* menu() {
	system("cls");
	printf("\n ************************************************");
	printf("\n * Selecting appropriate action: \t\t*");
	printf("\n *\t\t1. Question 1\t\t\t*");
	printf("\n *\t\t2. Question 2\t\t\t*");
	printf("\n *\t\t3. Quit program\t\t\t*");
	printf("\n ************************************************");
	printf("\n Choice [1-3]: ");
	
	char* opt = (char*)calloc(256, sizeof(char));
	gets(opt);
	
	return opt;
}

void doAlgorithm(int arr[]) {
	printf("\n ***** Finding the MAX number Program *****\n");
	int number;
	int count = 0;
	int key;
	
	while(true) {
		printf("\n Please enter a postive number: "); scanf("%d", &number);
		if(number > 0) {
			arr[count++] = number;
		}
		lableKey:
		printf(" Continue (y/n): ");
		key = getche();
		if(key == 'y' || key == 'Y') {
			continue;
		} else if(key == 'n' || key == 'N') {
			break;
		} else {
			printf("\n invalid [y/n] retry...\n");
			goto lableKey;
		}
	}
	
	int max = INT_MIN;
	printf("\n The entered numbers are: ");
	for(int i = 0; i < count; i++) {
		printf(" %d ", arr[i]);
		max = arr[i] > max ? arr[i] : max;
	}
	
	printf("\n The greatest number is %d", max);
}

void doQuestion1() {
	int arr[100];
	doAlgorithm(arr);
}

void doArrayStudent(Student s[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\n Student no %d: \n", i + 1);
		printf(" Name: "); gets(s[i].name);
		printf(" Enrollment No: "); scanf("%d", &s[i].enrollmentNo);
		printf(" Science Mark: "); scanf("%f", &s[i].science);
		printf(" Math Mark: "); scanf("%f", &s[i].math);
		printf(" English Mark: "); scanf("%f", &s[i].english);
		fflush(stdin);
	}
}


void doDisplayStudent(Student s[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\n Student no %d: \n", i+1);
		printf("\n\t\t Name: %s", s[i].name);
		printf("\n\t\t Enrollment No: %d", s[i].enrollmentNo);
		printf("\n\t\t Science Mark: %.2f", s[i].science);
		printf("\n\t\t Math Mark: %.2f", s[i].math);
		printf("\n\t\t English Mark: %.2f", s[i].math);
		float total = s[i].science + s[i].math + s[i].math;
		printf("\n\t\t Total Mark: %.2f", total);
		printf("\n\t\t Average Mark: %.2f", total / 3);
	}
}

void doQuestion2() {
	int n;
	do {
		printf("\n How many student do you want to manage: "); scanf("%d", &n);
	} while((n < 1 || n > 100) && printf(" The number of student must be between 1 and 100. \n"));
	fflush(stdin);
			
	Student s[n];
	printf("\n Please enter students data: \n");
	doArrayStudent(s, n);
	
	printf("\n ***** Student details *****");
	doDisplayStudent(s, n);
}


