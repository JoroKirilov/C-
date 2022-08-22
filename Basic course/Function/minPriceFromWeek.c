#include <stdio.h>




int main()

{
	int n, counter; 
	scanf_s("%d", &n);
	while (n > 0)
	{
		n / 10;
		counter++;
	}
	printf("%d", counter);
}