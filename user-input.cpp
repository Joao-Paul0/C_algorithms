#include <stdio.h>
#include <string.h>

int main() {
	
	char name[20]; //bytes
	int age;
	
	printf("\nWhat's your name?");
//	scanf("%s", &name); //scanf can read whitespace but will include \n
	fgets(name, 25, stdin); //if you need to accept a string from a user that includes blanks as a first name and a last name, you need to use fgets instead of scanf
	name[strlen(name)-1] = '\0';
	
	printf("How old are you?");
	scanf("%d", &age);
	
	printf("\nHello %s, how are you?", name);
	printf("\nYou are %d years old", age);
	
	return 0;
}
