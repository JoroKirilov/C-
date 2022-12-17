/* Задача 3. Използвайте Задача 2, за да напишете програма, която проверява
дали съобщението не е палиндром. Палиндром е съобщение, в което
буквите от ляво на дясно са същите като от дясно на ляво.
 */

#include<stdio.h>


int main()
{
    int i , j ;
    char str[100];
    int stringLen = 0 ; 
    int isPalindrome = 1 ; 

    printf("Input the string : \n");
    scanf("%100[^\n]" , str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        stringLen++; 
    }
    for (i = 0 , j = stringLen - 1 ; i <= j ; i++ , j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0 ; 
            break ;
        }
    }
    if(isPalindrome == 0)
    {
        printf("Is not palindrome");
    }
    else
    printf("Is palindrome");
    
        
}