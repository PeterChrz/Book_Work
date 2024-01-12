#include <stdio.h>

void times2(int *a, int len){

    for (int i = 0; i < len; i++){
        printf("%d\n", a[i] * 2);
    }
}

// Same thing, but using array notation
void times3(int a[], int len) {
    for (int i = 0; i < len; i++){
        printf("%d\n", a[i] * 3);
    }
}

//Same thing but array notation with size
void times4(int a[5], int len) {
    for (int i = 0; i < len; i++){
        printf("%d\n", a[i] * 4);
    }
}


int main(void) {

    int x[5] = {11, 22, 33, 44, 55};

    times2(x, 5);
    times3(x, 5);
    times4(x, 5);
}
// ALl of those methods of listing an array as a paremeter are correct/identical.
// int *a
// int a[]
// int a[5]
