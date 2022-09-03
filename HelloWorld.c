#include <stdio.h>

int main() {
	
	printf("\"I like pizza\" - Abraham Lincoln probably\n");
	
//	variables

int x; //declaration
x = 123; //inicialization
int y = 321; //declation + initialization

int age = 20; 		 //integer
float gpa = 2.05;	 //floating point number
char grade = 'C';	 //single character
char name[] = "Bro"; //array of characters

printf("Hello %s\n", name);
printf("You are %d years old\n", age);
printf("Your averge grade is %c\n", grade);
printf("Your gpa is %.2f\n", gpa);
	return 0;
}
