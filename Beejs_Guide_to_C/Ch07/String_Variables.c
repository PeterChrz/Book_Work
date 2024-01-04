#include <stdio.h>

int main(void)
{
    char *s = "Hello, World!";
    //The type is pointer to a char.
    //The string variable s is a point to the first character in the string.
    
    printf("%s\n", s);

    // Nearly identical to the char* is Arrays
 
    char text[14] = "Hello, world!";
 
    // Or we could be super lazy and have the compiler
    // figure out the array length
    // char text[] = "Hello, World!";
    // We could also have written it as char *text = "Hello, World!";
    //
    // The subtle  difference between the two is that the Pointer
    // is not mutable, while the array is mutable and can be changed
    // using array notation.

    for (int i = 0; i < 13; i++)
        printf("%c\n", text[i]);
    // %c means we're printing a single character.


}
