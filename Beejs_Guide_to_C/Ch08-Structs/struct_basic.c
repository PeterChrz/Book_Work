#include <stdio.h>

int main(void)
{
    //define struct as a basic object which you can fill with data.
    //Like an object oriented class but without methods.

    struct car {
        char *name;
        float price;
        int speed;
    }; // always escape

    //When you define an instance of a struct variable,
    //It will be variable "name" of type 'struct car'
    //We can initialize individually or all at once when declaring the variable.
    //Enter values in order of their entry in the struct.

    struct car saturn = {"Saturn SL/2", 1600.99, 175};
    //If someone changes the order of the struct it would break the code. 
    //To be independent of the oder use specific initializers.
    // struct car saturn = {.speed=175, .name="Saturn SL/2"};
    // Any missing field designators are initialized to zero.

    //print with specific type notation.
    printf("Name:            %s\n", saturn.name);
    printf("Price:           %f\n", saturn.price);
    printf("Top Speed:       %d km\n", saturn.speed);

}
