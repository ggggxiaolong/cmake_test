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