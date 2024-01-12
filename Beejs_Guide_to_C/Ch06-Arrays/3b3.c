#include <stdio.h>

int main(void){

    int a[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};

    int row,col;

    for (row = 0; row < 3; row++){

        printf("\n");

        for (col = 0; col < 3; col++){

            //printf("(%d,%d) = %d\n", row, col, a[row][col]);
            printf("%d", a[row][col]);

        }
    }

    printf("\n");
}
