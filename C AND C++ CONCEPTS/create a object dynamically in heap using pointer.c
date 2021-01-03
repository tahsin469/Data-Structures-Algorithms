// create a object dynamically in heap using pointer

# include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle *ptr;//stack
    ptr=(struct Rectangle*)malloc(sizeof(struct Rectangle));//heap
    ptr->length=2;
    ptr->breadth=2;
    printf("Area Rectangle=%d",ptr->length*ptr->breadth);
    return 0;
}
