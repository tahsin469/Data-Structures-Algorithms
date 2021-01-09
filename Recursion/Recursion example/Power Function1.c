#include<stdio.h>
int power1(int m,int n)
{
    if(n==0)
        return 1;
    return power1(m,n-1)*m;
}

int main()
{
    int r=power1(9,3);
    printf("%d ",r);
    return 0;
}
