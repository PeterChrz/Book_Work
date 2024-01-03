#include <stdio.h>

int main(void) {

    int i, j;
    // int i[100] = {0}; // initialize the first element as zero, and all the rest also.
    int a[5] = {22, 37, 3490, 18, 95};

    for (i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    //For loop with more numbers than it should have, has strange results.
    for (j = 0; j < 10; j++) {
        printf("%d\n", a[j]);
    }
    // It will print the 5 numbers in the array
    // and then 5 additional numbers of nonsense

    // int a[10] = {0, 11, 22, [5]=55, 66, 77};
    //[0, 11, 22, 0, 0, 55, 66, 77, 0, 0]
    //

    //#define COUNT 5
    //int a[COUNT] = {[COUNT-3]=3, 2, 1};
    // [0, 0, 3, 2, 1]


    // Both of the following are equal.
    // int z[3] = {22, 37, 3490};
    // int z[] = {22, 37, 3490}; // C will determine the array size automatically.

}
