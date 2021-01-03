//returning array as parameter
#include<stdio.h>

int []fun(int n)
{
    int *p;
    p=(int*)malloc(n*sigzof(int));
    return p;
}
int main()
{
    int *A;
    A=fun(5);
    printf("%d",A);
    return 0;
}

