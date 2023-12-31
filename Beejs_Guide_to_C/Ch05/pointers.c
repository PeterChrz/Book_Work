#include <stdio.h>

int main(void)
{

    int i = 10;
    int *p; // This is not dereferenced the * is used to identify this as a pointer.

    printf("The value of i is %d\n", i);

    printf("And its address is %p\n", (void *)&i);


    p = &i; // Now p points to the memory address of i.

    *p = 20; //We now put 20 into the pointer which places it into i's memory address.
    
    printf("i is %d\n", i);  //prints "20" since that's what the pointer did. 
    printf("p(aka hooked directly into i's memory) is %d\n", *p); // "20" since dereferencing p is the same as i.
}
