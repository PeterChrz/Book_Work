#include <stdio.h>

int main(void)
{

    FILE *fp;
    int x = 32;

    fp = fopen("output.txt", "w");
    // fp = stdout;
    // Can also set this to fp = stdout;
    // and then it would print to console instead of a file.

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("hello, world!\n", fp);

    fclose(fp);
}
