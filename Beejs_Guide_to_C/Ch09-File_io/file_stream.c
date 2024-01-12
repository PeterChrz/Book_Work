#include <stdio.h>

int main(void)
{

    FILE *fp; // Variable for open file.

    fp = fopen("hello.txt", "r"); // Open file for reading.
    // Will return NULL if anything goes wrong, it's critical
    // to error check!

    int c = fgetc(fp); // Read in a single char
    printf("%c\n", c); // Print char to stdout
    
    fclose(fp); // Close the file when done.

    //printf("Hello, world!\n");
    //fprintf(stdout, "Hello, world\n"; //printf to a file  
    //These two calls are the same, both print to stdout.
}
