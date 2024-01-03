#include <stdio.h>

// In multidimensional arrays C needs to know all the dimensions (outside the first)
// In this case these two are equivalent
//  void print_2D_array(int a[2][3])
//  void print_2D_array(int a[][3])
//  void print_2D_array(int (*a)[3])
//  The compiler only needs the second dimension to know how far in memory
//  to skip for each increment.

void print_2D_array(int a[2][3])
{
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
        printf("\n");
    }

}

int main(void)
{
    int x[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    print_2D_array(x);
}
