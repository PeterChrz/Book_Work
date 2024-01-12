#include <stdio.h>

int plus_one(int n) // the "Definition"
{
    //The int before plus_one indicates the return type.
    //(int n) indicates this function takes one int argument stored in parameter n.
    // A parameter is a special type of local variable into which args are copied.
    return n + 1;

}


// We can then call this function in main() and assign it to local var j.
// Functions must all come before main(), unless you use function prototypes.
//
//In this case we could have created a function prototype :
//int plus_one(int n);
//

int main(void) {

    int i = 10, j;

    j = plus_one(i); //the "call"

    printf("i + 1 is %d\n", j);
}
