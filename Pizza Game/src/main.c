
#include "../include/defines.h"
#include "../include/restaurant.h"

int main() {
    bool business = true;  

    while (business) {
        business = openForBusiness();
    }

    return EXIT_OK; 
}

