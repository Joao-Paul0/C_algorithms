#include <stdio.h>
#include <stdbool.h>

int main() {
	
	char a = 'C';					// single character	%c
	char b[] = "John";				// array of the characters %s
	
	float c = 3.234432;  			// 4 bytes (32 bits of precision) 6 - 7 digits %f
	double d = 3.23443297546753;	// 8 bytes (64 bits of precision) 15 - 16 digits %lf
	
	bool e = true;					// 1 byte (true or false) %d
	
	char f = 100; 					// 1 byte (-128 to +127) %d or %c
	unsigned char g = 255;			// 1 byte (0 to +255) %d or %c 		 unsigned = no negative numbers 
	
	short int h = 32767;			// 2 bytes (-32,768 to +32,767) %d
	unsigned short int i = 65535;	// 2 bytes (0 to +255) %d or %c
	
	int j = 2147483647; 			// 4 bytes (-2,147,483,648 to +2,147,483,647) %d
	unsigned int k = 4294967295;	// 4 bytes (0 to +4,294,967,295) %u			
	
	long long int l = 9223372036854775807;				// 8 bytes (-9 quintillion to quintillion) %lld
	unsigned long long int m = 18446744073709551615U;	// 8 bytes (0 to +18 quintillion) %llu	/*to avoid the warning be after our number inside our unsigned long long int,*/
//	we tend not to use long long int very often, because well we don't really need such a big number but under certain circumstances you might be dealing with the speed of light or something you might need uses long long int, but we commonly use more integer pattern
	
	printf("char: %c\n", a); 							// char
	printf("character array: %s\n", b);					// character array
	printf("float: %f\n", c);							// float
	printf("double: %lf\n", d);							// double
	printf("bool: %d\n", e); 							// bool
	printf("char as numeric value: %d\n", f);			// char as numeric value
	printf("unsigned char as numeric value: %d\n", g);	// unsigned char as numeric value
	printf("short: %d\n", h);  							// short
	printf("unsigned short: %d\n", i);  				// unsigned short
	printf("int: %d\n", j); 							// int
	printf("unsigned int: %u\n", k);  					// unsigned int
	printf("long long int: %lld\n", l); 				// long long int
	printf("unsigned long long int: %llu\n", m); 		// unsigned long long int

	return 0;
	
}
