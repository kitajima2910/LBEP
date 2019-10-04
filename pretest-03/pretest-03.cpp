#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct EMPLOYEE {
	int empNo;
	char empName[31];
	int baseSalary;
	int workedDays;
} Employee;

char* doMenu();
double factorial(int n, double mul);
void doArrayEmployee(Employee e[], int n);
void doDisplayEmployee(Employee e[], int n);

int main() {
	
	int n;
	
	while(true) {
		char* opt = doMenu();
		if(strcmp(opt, "1") == 0) {
			printf("\n ***** Finding the Factorial of a number  Program *****");
			do {
				printf("\n Please enter a number from 1 to 10: "); scanf("%d", &n);
			} while((n < 1) && printf("\n Invalid retry n > 1..."));
			fflush(stdin);
			printf(" The factorial of %d is: %.0f ", n, factorial(n, 1));
			getch();
		} else if(strcmp(opt, "2") == 0) {
			printf("\n *** Employee  Management System ***");
			do {
				printf("\n Enter the number of employees: "); scanf("%d", &n);
			} while((n > 100 || n < 1) && printf("\n The number of employee must be between 1 and 100. Input again..."));
			fflush(stdin);
			Employee e[n];
			doArrayEmployee(e, n);
			doDisplayEmployee(e, n);
			getch();
		} else if(strcmp(opt, "3") == 0) {
			exit(1);
		} else {
			printf("\n Invalid retry [1-3]...");
			getch();
		}
	}

	getch();
	return 0;
}

char* doMenu() {
	system("cls");
	printf("\n **************************************** ");
	printf("\n * Selecting appropriate action: \t*");
	printf("\n * \t1. Question 1\t\t\t*");
	printf("\n * \t2. Question 2\t\t\t*");
	printf("\n * \t3. Quit program\t\t\t*");
	printf("\n **************************************** ");
	printf("\n Choice [1-3]: ");
	
	char* opt = (char*)calloc(256, sizeof(char));
	gets(opt);
	return opt;
}

double factorial(int n, double mul) {
	if(n == 1 || n == 0) {
		return mul;
	}
	return factorial(n - 1, mul * n);
}

void doArrayEmployee(Employee e[], int n) {
	for(int i = 0; i < n; i++) {
		printf("\n Input employee no of %d: \n", i + 1);
		printf(" Employee No.: "); scanf("%d", &e[i].empNo);
		fflush(stdin);
		printf(" Employee Name: "); gets(e[i].empName);
		printf(" Base Salary: "); scanf("%d", &e[i].baseSalary);
		printf(" Worked days: "); scanf("%d", &e[i].workedDays);
		fflush(stdin);
	}
}

void doDisplayEmployee(Employee e[], int n) {
	printf("\n %-5s %-20s %-10s %-10s %-10s", "No", "Name", "Base Sal", "Wrk days", "Net salary");
	for(int i = 0; i < n; i++) {
		printf("\n %-5d %-20s %-10d %-10d %-10d", e[i].empNo, e[i].empName, e[i].baseSalary, e[i].workedDays, e[i].baseSalary * e[i].workedDays);
	}
}


