#include <stdio.h>
int NCR(int n,int r)
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main()
{
    printf("%d \n",NCR(5,3));
    return 0;
}
