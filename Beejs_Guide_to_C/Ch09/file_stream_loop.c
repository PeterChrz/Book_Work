#include <stdio.h>

int main(void)
{

    FILE *fp; 
    int c;

    fp = fopen("hello.txt", "r");

    while((c = fgetc(fp)) != EOF)
        printf("%c", c);
    //We're still reading one char at a time and most text files are many lines. 

    fclose(fp);
}

