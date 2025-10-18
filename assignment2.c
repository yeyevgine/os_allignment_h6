#include <stdio.h>

struct s {
	char a;
	int b;
	double c;
};
struct s2 {
	double c;
	int b;
	char a;

};
struct s3 {
        char a;
	double c;
        int b;
};


int main()
{
	struct s s1;
	struct s2 s2;
	struct s3 s3;

	printf("The size of struct 1: %zu bytes \n", sizeof(s1));
	printf("Adress of a: %p\n", &s1.a);
        printf("Adress of b: %p\n", &s1.b);
        printf("Adress of c: %p\n", &s1.c);

	printf("\nThe size of struct 2: %zu bytes \n", sizeof(s2));
        printf("Adress of a: %p\n", &s2.a);
        printf("Adress of b: %p\n", &s2.b);
        printf("Adress of c: %p\n", &s2.c);

	printf("\nThe size of struct 3: %zu bytes \n", sizeof(s3));
        printf("Adress of a: %p\n", &s3.a);
        printf("Adress of b: %p\n", &s3.b);
        printf("Adress of c: %p\n", &s3.c);

	return 0;
}
