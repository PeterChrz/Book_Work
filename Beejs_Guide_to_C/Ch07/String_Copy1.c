#include <stdio.h>

int main(void)
{

    char s[] = "Hello, world!"; 
    char *t;

    t = s; // This makes a copy of the pointer not string.
    
    t[0] = 'z'; //Modify t
    
    //Print s shows the modification!
    // t and s point to the same thing.

    printf("%s\n", s);

}
