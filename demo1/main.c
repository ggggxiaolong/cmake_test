#include <stdlib.h>
#include <stdio.h>

/// @brief 计算幂
/// @param base
/// @param pow
/// @return
double power(double base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    int rest = base;
    for (int i = 1; i < exponent; i++)
    {
        rest *= base;
    }

    return rest;
}

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