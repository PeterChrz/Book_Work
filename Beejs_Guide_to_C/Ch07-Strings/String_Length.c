#include <stdio.h>
#include <string.h>

int my_strlen(char *s)
{

    int count = 0;

    while (s[count] != '\0') //Single quotes for single char
        count++;

    return count;
}

int main(void){

    char *s = "Hello, World!";

    printf("The string is %zu bytes long.\n", strlen(s));

    //The strlen() function returns type size_t which is an integer type
    //so you can use it for integer math.
    //

    printf("Using our own strlen function. %zu.\n", my_strlen(s));
}
