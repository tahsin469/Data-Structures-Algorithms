# include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r={10,5};
    printf("r.length=%d,r.breadth=%d\n",r.length,r.breadth);
    r.length=2;
    r.breadth=2;
    printf("Area Rectangle=%d",r.length*r.breadth);
    return 0;
}
