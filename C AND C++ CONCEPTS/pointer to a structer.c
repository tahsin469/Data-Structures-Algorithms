
# include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r={2,2};
    printf("r.length=%d,r.breadth=%d\n",r.length,r.breadth);
    struct Rectangle *p=&r;
    p->length;
    p->breadth;
    printf("Area Rectangle=%d",p->length*p->breadth);
    return 0;
}
