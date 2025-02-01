#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    char c;
    short s;

    printf("Size of char: %d byte(s)\n", sizeof(c));
    printf("Size of short: %d byte(s)\n", sizeof(s));
    printf("Size of float: %d byte(s)\n", sizeof(float));
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of long: %d byte(s)\n", sizeof(long));
    printf("Size of long double: %d byte(s)\n", sizeof(long double));


    printf("Signed short min value %d \n", SHRT_MIN);
    printf("Signed short max value %d \n", SHRT_MAX);
    printf("Unsigned short min value %u \n", SHRT_MAX);

     printf("Signed int min value %d \n", INT_MIN);
    printf("Signed int max value %d \n", INT_MAX);
    printf("Unsigned int min value %u \n", INT_MAX);

    printf("Signed long min value %d \n", LONG_MIN);
    printf("Signed long max value %d \n", LONG_MAX);
    printf("Unsigned long min value %u \n", LONG_MAX);

    printf("Signed char min value %d \n", CHAR_BIT);
    printf("Signed char min value %d \n", CHAR_MIN);
    printf("Signed char max value %d \n", CHAR_MAX);
    printf("Unsigned char min value %u \n", CHAR_MAX);

    int x=10, y =20, z;
    z = x++ * --y;
    printf("%d %d %d\n", x, y, z);


    int f = 5;
    f = f++ + ++f;
    printf("%d", f);


 return;
}
