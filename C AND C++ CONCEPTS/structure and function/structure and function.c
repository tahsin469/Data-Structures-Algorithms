#include<stdio.h>
struct Rectangle
{
    int length,breadth;
};
void initialize(struct Rectangle *r,int l, int b)
{
    r->length=l;
    r->breadth=b;
}
int area (struct Rectangle  r)
{
    return r.length*r.breadth;
}
void ChangeLength(struct Rectangle *r,int l)
{
    r->length=l;
}
int main()
{
    struct Rectangle r;
    initialize(&r,10,5);
    area(r);
    ChangeLength(&r,20);
    return 0;
}
