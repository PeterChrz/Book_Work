#include<stdio.h>

//Print numbers between 0 and 9, inclusive

int main (void) {
    
    // While statement

   int i = 0;
   int j = 0;
    while(i < 10) {
        printf("I is %d\n", i);
        i++;
    }

    // For loop

    for (i = 0; i < 10; i++) {
        printf("i is %d\n", i);
    }

    // Multiple things in each clause
    for (i = 0, j = 999; i < 10; i++, j--) {
        printf("%d, %d\n", i, j);
    }

    // An empty for will run forevery:
    // for(;;) { }
    // Similar to infinite while loop
    // while (1) { }
}

