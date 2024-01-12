#include <stdio.h>

int main(void)
{

    FILE *fp;
    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb"); //write binary

    // Calling fwrite the required args are:
    //  * Pointer to data to write
    //  * Size of each peice of data
    //  * Count of the "piece" of data
    //  * FILE*

    fwrite(bytes, sizeof(char), 6, fp);
    //We indicate we have items this big (sizeof(char)) and we have this many (6)
    // Serialize all your binary data when you write it to a stream,
    // so that it is portable between systems and architectures.
    fclose(fp);
}
