#include<stdio.h> // For printf
#include<stdlib.h> // For rand


int main(void) {

	int r;

	do {
	    r = rand() % 100; // Get a random # between 0 - 99
	    printf("%d\n", r);
	} while (r != 37);

	//rand() is a pseudorandom  generator that must be seeded with a different number to generate a different sequence. check srand()
}
