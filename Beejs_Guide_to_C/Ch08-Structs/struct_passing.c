#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

// Declared outside so it can be used globally. 

//To set function signature we're passing &saturn so it must be
//a pointer to a struct car and the new price is a float.
void set_price(struct car *c, float new_price){
   // c.price = new_price; //ERROR!    
                         //The dot operatior doesn't work on pointers to structs
                         //only on structs themselves. 
    //We want to derefrence the struct to de-pointer it and get the base struct.
    //(*c).price = new_price; //Works but it's ugly.
    //The arrow operator helps us refer to fields in pointers to structs
    c->price = new_price; //Arrow Operator!
}

int main(void) 
{

    struct car saturn = {.speed=175, .name="Saturn SL/2"};

    //Pass a pointer into this struct car, along with new price.
    
    set_price(&saturn, 799.99);
    //This is preferred because passing to a function makes a copy of a struct.
    //working on that struct within a function would not impact the original struct. -- problem
    //Also the struct could be very large and you would be making lots of expensive
    //copies of data -unnecessarily. 


    printf("Price: %f\n", saturn.price);

}
