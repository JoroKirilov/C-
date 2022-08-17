#include <stdio.h>

int isEven(int n);


int main()
{
    int n;

    scanf("%d", &n);
    int evenNumber[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int element;
        scanf("%d", &element);
        if (isEven(element) > 0)
        {
            evenNumber[i] = element;
            sum += element;
        }
    }

    printf("%d", sum);

    return 0;
}


int isEven(int n)
{
    if (n % 2 == 0)
    {
        return n;
    }
    else
    {
        n = 0;
        return n;
    }
}