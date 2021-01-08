#include<stdio.h>
int Ifact(int n)
{
    if(n==0)
        return 1;
    return Ifact(n-1)*n;
}
/*int fact(int n)
{
    int f=1,i=0;
    for(i=1; i<=n; i++)
        f=f*i;
    return f;
}*/
int main()
{
    int r=Ifact(5);
    printf("%d ",r);
    return 0;
}
