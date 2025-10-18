#include <stdio.h>

struct s {
	char a;
	int b;
	double c;
};
#pragma pack(1)
struct packed_s1 {
        char a;
        int b;
        double c;
};
#pragma pack(2)
struct packed_s2 {
        char a;
        int b;
        double c;
};
#pragma pack(4)
struct packed_s3 {
        char a;
        int b;
        double c;
};

int main ()
{	struct s s1;
	struct packed_s1 s2;
	struct packed_s2 s3;
	struct packed_s3 s4;

        printf("The size of struct 1, without #pragma pack: %zu bytes \n", sizeof(s1));
        printf("Adress of a: %p\n", &s1.a);
        printf("Adress of b: %p\n", &s1.b);
        printf("Adress of c: %p\n", &s1.c);

        printf("\nThe size of struct 2, #pragma pack(1): %zu bytes \n", sizeof(s2));
        printf("Adress of a: %p\n", &s2.a);
        printf("Adress of b: %p\n", &s2.b);
        printf("Adress of c: %p\n", &s2.c);

        printf("\nThe size of struct 3, #pragma pack(2): %zu bytes \n", sizeof(s3));
        printf("Adress of a: %p\n", &s3.a);
        printf("Adress of b: %p\n", &s3.b);
        printf("Adress of c: %p\n", &s3.c);

	printf("\nThe size of struct 4, #pragma pack(4): %zu bytes \n", sizeof(s4));
        printf("Adress of a: %p\n", &s4.a);
        printf("Adress of b: %p\n", &s4.b);
        printf("Adress of c: %p\n", &s4.c);
	return 0;
}
