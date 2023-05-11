#include <stdlib.h>
#include <stdio.h>
#include "math/math_func.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Help: %s base power \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double rest = power(base, exponent);
    printf("%g ^ %d is %g \n", base, exponent, rest);
    return 0;
}