#include <stdio.h>


int main()
{
    int totalCost = 0 ;
    int totalSpirit = 0 ;
    int quantity = 0 ; 
    int days = 0 ;
    int ornamentPrice = 2;
    int ornamentSpirit = 5;
    int treeSkirtPrice = 5;
    int treeSkirtSpirit = 3;
    int treeGalandPrice = 3;
    int treeGalandSpirit = 10;
    int treeLightPrice = 15;
    int treeLightSpirit = 17;
    scanf("%d", &quantity);
    scanf("%d", &days);
    for (int i = 1 ; i <= days ; i++)
    {
        if (i % 2 == 0 )
        {
            totalCost += (quantity * ornamentPrice);
            totalSpirit += ornamentSpirit;
        }
        if (i % 3 == 0)
        {
            totalCost += (quantity*treeSkirtPrice) + (quantity*treeGalandPrice);
            totalSpirit += treeSkirtSpirit + treeGalandSpirit ;
        }
        if (i % 5 == 0)
        {
            totalCost += quantity * treeLightPrice;
            totalSpirit += treeLightSpirit;
        }
        if(i % 10 == 0 )
        {
            totalSpirit -= 20;
            totalCost += treeSkirtPrice + treeGalandPrice + treeLightPrice;
        }
         if (i % 11 == 0)
         {
                 {
                    quantity += 2;
                 }
         }
        
        
    }
   
    

    printf("Total cost: %d\n" , totalCost);
    printf("Total spirit: %d\n" , totalSpirit);
    return 0;
}
