#include <stdio.h>


int main(void)
{

    typedef struct {
        int x, y;
    } point;

    point p = {.x=20, .y=40};

    printf("%d, %d\n", p.x, p.y);
}
