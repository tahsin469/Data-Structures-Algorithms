#include <stdio.h>
int count()
{
    //static
     int n=0;
    n++;
    return n;
}
int main()
{
    printf("%d",count());
    printf("%d",count());
    printf("%d",count());
    return 0;
}
