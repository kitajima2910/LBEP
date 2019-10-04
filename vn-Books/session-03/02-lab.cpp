#include <stdio.h>
#include <conio.h>

void displayAgeAndSalary(int, float);

int main() {

	int age;
	double salary;
	printf("### DISPLAY AGE AND SALARY ###");
	printf("\nEnter age: "); scanf("%i", &age);
	printf("Enter salary: "); scanf("%lf", &salary);
	printf("Age is %d", age);
	printf("\nSalary is %lf", salary);
	
	getch();
	return 0;
}

void displayAgeAndSalary(int age, float salary) {
	printf("Age is %d", age);
	printf("\nSalary is %f", salary);
}

