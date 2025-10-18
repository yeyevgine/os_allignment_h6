#include <stdio.h>


int main()
{
	int a;	
	char b;
	double c;
	short d;


	printf("Size of int: %zu bytes\n", sizeof(a));
        printf("Size of char: %zu bytes\n", sizeof(b));
        printf("Size of double: %zu bytes\n", sizeof(c));
        printf("Size of short: %zu bytes\n", sizeof(d));


	printf("Address of int a: %p\n", &a);        
	printf("Address of char b: %p\n", &b);
	printf("Address of double c: %p\n", &c);
	printf("Address of short d: %p\n", &d);


	return 0;
}
