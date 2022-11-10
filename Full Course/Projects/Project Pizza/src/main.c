#include "defines.h"
#include "restaurant.h"

int main() {
    short business = 1;  // why is not bool variable ??? 

    while (business) {
        business = openForBusiness();
    }

    return 0;  /// TODO : MAKE ENUM STRUCT FOR ERROR HANDLING
}



// TODO : include stdint.h to replace int with uint_32 or uint_16
// TODO : include stdbool.h to use bool variables 
// TODO : INPUT READ FROM FILE  ( 12 DISHES AND INGREADIANTS ) AND CHECK VALID INPUT????
//LAST VERSION 