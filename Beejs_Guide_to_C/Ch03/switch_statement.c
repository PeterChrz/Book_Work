#include <stdio.h>

int main(void) 
{
    int goat_count;

    printf("Enter a goat count: ");
    scanf("%d", &goat_count); // Read an integer
    

    switch (goat_count) {
        case 0:
            printf("You have no goats.\n");
            break;
        
        case 1:
            printf("You have a singular goat.\n");
            break;

        case 2:
            printf("You have a brace of goats.\n");
            break;

        default:
            printf("You have a bona fide plethora of goats!\n");
            break;
    }

// Switch statments can be faster then if-else cascade
// if-else can do relational conditionals like <, >=, floating point and other types. Switch cannot.
// Switch has fall through, if there is no break it will continue and action the next switch case codeblock. 

}
