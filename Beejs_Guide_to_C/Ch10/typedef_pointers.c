#include <stdio.h> 

int main(void)
{
    typedef int *intptr; // This type is a pointer.

    int a = 10;
    intptr x = &a;
    //Using std pointer method
    int *y = &a;

    printf("a = %d\n", a);
    printf("intptr = %d\n", *x);
    printf("y = %d\n", *y);
}
