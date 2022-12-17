#include <stdio.h>

int main()
{
 int a = 13;
 int* pValue = NULL;
 pValue = &a; /* assigning address of iA to the pointer
*/
 printf("Address of variable a is: %p\n", pValue);
 printf("\nValue of variable iA is: %d\n", *pValue);
 return 0;
}
