#include <stdio.h>

int add_integer(int x, int y)
{
    return x + y;
}

double sub_double(double x, double y)
{
    return x - y;
}


int main(int argc, char** argv)
{
    printf("09/22\n");

    char a = 'x';

    char *p_a = &a;

    int b = 123;

    long c = 56789L;

    float d = 9.23f;

    double e = 2.1234;

    printf("sizeof char is %ld %ld, sizeof p_a is %ld\n", sizeof(a), sizeof(char), sizeof(p_a));

    printf("sizeof int is %ld %ld\n", sizeof(b), sizeof(int));

    printf("sizeof long is %ld %ld\n", sizeof(c), sizeof(long));

    printf("sizeof float is %ld %ld\n", sizeof(d), sizeof(float));

    printf("sizeof double is %ld %ld\n", sizeof(e), sizeof(double));

    printf("%c\n", a);
    printf("%d\n", b);
    printf("%ld\n", c);
    printf("%f\n", d);
    printf("%f\n", e);

    int x = 1; 
    int y = 2;
    int result = add_integer(x, y);
    printf("%d + %d = %d\n", x, y , result);

    double x2 = 1.11;
    double y2 = 2.22;
    double result2 = sub_double(x2, y2);
    printf("%f - %f = %f\n", x2, y2, result2);



    return 0;
}
