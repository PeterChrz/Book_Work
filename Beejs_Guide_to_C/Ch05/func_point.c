#include <stdio.h>

void increment(int *p) //this function accepts a pointer to an int.
{

    *p = *p + 1; //Add one to the thing p points to.

}

int main(void){

    int i = 10;
    int *j = &i;  // the address-of turns it into a pointer to i.

    printf("i is %d\n", i); // prints "10"
    printf("i is also %d\n", *j); // Also prints "10"

    increment(j);

    printf("i is now %d\n", i);  // prints "11"!
    // Previously whatever happened in the function stayed in the function and was lost.
    // Now instead of dealing with return statements we can push the updates directly
    // to the memory location of the variable we want to update!                                


    // We can write this all more concisely as:
    increment(&i); // no need for the variable even.

}
