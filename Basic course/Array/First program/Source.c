#pragma warning(disable:4996)
#include <stdio.h>


int main()
{
	int n = 0;
	int t = 0;
	int nums[4];
	for (n = 0 ; n < 4; n++)
	{
		scanf("%d", &nums[n]);
	}
	
	printf("%d %d %d %d", nums[0], nums[1], nums[2], nums[3]);
}