#include <stdio.h>

int main(void)
{

    FILE *fp;
    char s[1024]; //large enough for any lines this program will encounter.
    int linecount = 0;

    fp = fopen("quote.txt", "r");

    while (fgets(s, sizeof s, fp) != NULL)
        printf("%d: %s", ++linecount, s);
        //We preincrement int linecount to number each line. 

    //s is our pointer to a char buffer
    //sizeof s - is our max number of bytes to read. 
    //FILE* is represented by var fp, which holds the file. 

    fclose(fp);
}
