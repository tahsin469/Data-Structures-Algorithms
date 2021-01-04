#include<stdio.h>
struct Rectangle
{
    int length , breadth;
};
int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}
int main()
{
    struct Rectangle r={10,5};
    printf("%d",area(r));
    return 0;
}
