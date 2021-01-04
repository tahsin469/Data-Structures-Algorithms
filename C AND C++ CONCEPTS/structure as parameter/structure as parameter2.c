#include<stdio.h>
struct Test
{
    int A[5];
    int n;
};
void fun(struct Test t1)
{
    t1.A[0]=0;
    printf("%d",t1.A[0]);
}
int main()
{
    struct Test t={{2,4,5,6,8,10},5};
    fun(t);
   return 0;
}
