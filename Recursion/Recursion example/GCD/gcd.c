#include<stdio.h>
int main()
{
    int n1,n2,rem;
    scanf("%d\n%d",&n1,&n2);
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("gcd=%d",n1);
    return 0;
}
