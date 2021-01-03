
#include<stdio.h>
struct card
{
    int face,shape,color;
};
int main()
{
    struct card c={1,0,0};
    //c.face=1;
    //c.shape=0;
    //c.color=0;
    struct card d[50]={{1,0,0},{2,3,4}};
    printf("%d",d[0].face); //1

    return 0;
}
