#include<stdio.h>
//Ternary Operators
int main(void) {

// int x = 17;
 int x = 7;
 int y = 0;


//If x is greater than 10, then add 17 to y otherwise add 37. 
 y += x > 10? 17: 37;
 printf("%d \n", y);

//If statement equivalent
/*
 * if (x > 10)
	 y += 17;
 else
	y += 37;
*/

// Or check if number is odd or even

 printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");


}
