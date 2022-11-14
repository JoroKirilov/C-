#include <stdio.h>

int main() {
  
  char terranFleet[50];
  char protossFleet[50];
  do
  {
    scanf("%s %s", terranFleet, protossFleet);
  } while (!validInput(terranFleet) || !validInput(protossFleet));

}

  
