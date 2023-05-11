#include <stdlib.h>
#include <stdio.h>
#include "build/config.h"

#ifdef USE_MYMATH
    #include "math/math_func.h"
#else
    #include <math.h>
#endif

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Help: %s base power \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
#ifdef USE_MYMATH
    printf("Now we use our own Math library. \n");
    double rest = power(base, exponent);
#else
    printf("Now we use the standard library. \n");
    double rest = pow(base, exponent);
#endif
    printf("%g ^ %d is %g \n", base, exponent, rest);
    return 0;
}