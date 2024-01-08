#include <stdio.h>
#include <string.h>

int main(void) 
{

    char s[] = "Hello, world!";
    char t[100]; //Each char is 1 byte so plenty of room.

    strcpy(t, s); //Copies the string. If we did it we would need to
                  //do it byte by byte.
                  //in either case we need to ensure the destination 
                  //has enough space for the copy to work.
    
    t[0] = 'z'; //Modify t

    printf("%s\n", s); //s in unaffected.
    printf("%s\n", t); //t is changed.

}

