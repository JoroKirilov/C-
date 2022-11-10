#include "Dish.h"
#include <stdio.h>
#include <stdlib.h>

/*UNFINISHED. FINISH SO IT WORKS*/

/**
 * Used to define a dish within the restaurant OS. Contains menu ID, dish Price, number of ingredients needed,
 * list of ingredient names, the Name of the Dish and a list of ingredient names
 */
struct dish {
    int menuID;     
    int numIngredients;
    int cookingTime;
    float dishPrice;
    string dishName;
    string* ingerdientsList;   // TODO : read from file (maybe first hardcore)
};

/**
 * Creates a new dish with a predefined amount of ingredients.
 * @return A pointer to a dish stored in the memory.
 */
Dish *newDish(void) { //init dish funcion
    static int a = 1;
    struct dish *tmpDish = (struct dish *) malloc(sizeof(struct dish));
    tmpDish->dishName = NULL;
    tmpDish->dishPrice = 0;
    tmpDish->numIngredients = 0;
    tmpDish->cookingTime = 0;
    tmpDish->menuID = a;
    a++;
    return tmpDish;
}
void generateMaxDish(Dish **dishes, int maxDishes)
{
    for(int i = 0; i < maxDishes; i++)
    {
        dishes[i] = newDish();
        printf("add new dish - %d\n" , dishes[i]->menuID);
    }
}
Dish *findDishById (int id, Dish **dishes){
    Dish* tempDish = {0};
    if(id <= 0 || id > 12){
        puts("Error!");
        return NULL;
    }
    else{
    for(int i = 0; i <= 12; i++){
        if(id == dishes[i]->menuID){
           tempDish = dishes[i];
            break;
        }
    }
        return tempDish;
}
}
/**
* Sets the name of a newly added Dish.
* @param Dish - the dish that needs to be updated
* @param Name  - the Name for the new dish
*/
void setDishName(Dish **dish, string Name) {
    (*dish)->dishName = Name;
}

/**
 * Sets the Price of the new Dish.
 * @param Dish - the dish that needs to be updated
 * @param Price - the PRice of the new dish
 */
void setDishPrice(Dish **dish, float Price) {
    (*dish)->dishPrice = Price;
}

/**
 * Sets the total Number of ingredients needed for the new Dish
 * @param Dish - the dish that needs to be updated
 * @param Ingredients - the total amount of ingredients
 */
void setNumIngredients(Dish **dish, int Ingredients) {
    (*dish)->numIngredients = Ingredients;
}

/**
 * Adds a list of ingredients to the dish.
 * @param Dish - the dish that needs to be updated
 * @param Ingredients - the list of ingredients needed
 */
void setNeededIngredients(Dish **dish, string Ingredients[]) {
    int tmpIngredientsCount = (*dish)->numIngredients;
    (*dish)->ingerdientsList = (string*) malloc(tmpIngredientsCount * sizeof(string));
    for (int i = 0; i < tmpIngredientsCount; i++) {
        (*dish)->ingerdientsList[i] = (string) malloc(sizeof(string));
        (*dish)->ingerdientsList[i] = Ingredients[i];
    }
}

/**
 * Prints the ingredients of a given dish
 * @param Dish - Pointer to the Dish
 */
void printIngredients(Dish *dish) {
    for (int i = 0; i < dish->numIngredients; i++) {
        fputs(dish->ingerdientsList[i], stdout);
        fputs("\n", stdout);
    }
}

/**
 * Sets the cooking time of the Dish
 * @param Dish - the dish that needs to be updated
 * @param Time - the Time needed to cook the dish
 */
void setCookingTime(Dish **dish, int Time) {
    (*dish)->cookingTime = Time;
}

/**
 * Links the new Dish to the restaurant menu
 * @param Dish - the dish that needs to be updated
 * @param menuID - the number in the menu for the dish
 */
void addToMenu(Dish **dish, int menuID) {
    (*dish)->menuID = menuID;
}

/**
 * Tells how long the Dish needs to be cooked
 * @param Dish - A pointer to a Dish
 * @return Returns the cooking timer
 */
int getDishTimer(const Dish *dish) {
    return dish->cookingTime;
}

/**
 * Returns the dish name
 * @param Dish - A pointer to a Dish
 * @return Returns the Dish Name
 */
string getDishName(const Dish *dish) {
    return dish->dishName;
}

/**
 * Returns the Number of ingredients needed for the Dish
 * @param Dish - A pointer to a DIsh
 * @return Returns the total number of ingredients needed
 */
int getNumberIngredients(const Dish *dish) {
    return dish->numIngredients;
}

/**
 * Returns the Dish Price
 * @param Dish - A pointer tp a Dish
 * @return Returns the Dish Price
 */
float getDishPrice(const Dish *dish) {
    return dish->dishPrice;
}

/**
 * Returns the ID from the menu
 * @param Dish - A pointer to a Dish
 * @return Returns the menu number of the Dish as an integer
 */
int getMenuID(const Dish *const dish) {
    return dish->menuID;
}

/**
 * Returns a list of the Dish ingredients
 * @param Dish - A pointer to a Dish
 * @return Returns the ingredients of the Dish
 */
string*getIngredientsList(const Dish *dish) {
    return dish->ingerdientsList;
}
