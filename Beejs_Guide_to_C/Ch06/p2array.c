#include <stdio.h>

int main(void){

    int a[5] = {11, 22, 33, 44, 55};
    int *p;

    p = &a[0]; //p points to the array
               //The first element specifically.
               //also the same as writing:
               //p = a;1`


    printf("%d\n", *p);

}
