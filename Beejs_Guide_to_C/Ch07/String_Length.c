#include <stdio.h>
#include <string.h>

int main(void){

    char *s = "Hello, World!";

    printf("The string is %zu bytes long.\n", strlen(s));

    //The strlen() function returns type size_t which is an integer type
    //so you can use it for integer math.
}
