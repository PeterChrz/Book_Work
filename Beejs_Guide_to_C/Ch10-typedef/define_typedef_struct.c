#include <stdio.h>

int main(void)
{

    typedef struct animal {
        char *name;
        int leg_count, speed; 
    } animal; //new name.
    
    struct animal y; //this works
    animal z; //this also works because of our typedef definition. 
              /*
               * This same setup normally looks
               *
               * struct animal {
               *    char *name;
               *    int leg_count, speed;
               *  };
               *
               *  typedef struct animal animal; // original name | new name
               *
               *  struct animal y;
               *  animal z;
               */

    //You can also create an anonymous structure, no name but the final one..

/* typedef struct {
 *   char *name;
 *   int leg_count, speed;
 * } animal;   // new name
 *
 * struct animal y; //No Longer works as there is no struct animal
 * animal z; //This only works because animal is our alias. 
}
