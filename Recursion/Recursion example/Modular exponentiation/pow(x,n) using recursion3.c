#include<stdio.h>

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x*x, y/2);
    else
        return x*power(x*x, (y-1)/2);
}

/* Program to test function power */
int main()
{
    int x = 2;
    unsigned int y = 3;//1000000000000000000000

    printf("%d", power(x, y));
    return 0;
}
