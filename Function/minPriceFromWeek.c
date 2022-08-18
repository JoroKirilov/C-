#include <stdio.h>

void daysOfWeek(int);


int main()

{
	float price[7];
	float lowerPrice ; 
	char daysWithLowerPrice;
	lowerPrice = price[0];
	for (int i = 0; i < 7; i++)
	{
		scanf_s("%f", &price);
		
		if(lowerPrice > price)
		{
			lowerPrice = price;
			daysWithLowerPrice = i; 		
		}
		
	}
	printf("On ");
	daysOfWeek(daysWithLowerPrice);
	printf(" the price %f is lower", lowerPrice);
	



}

void daysOfWeek(int n)
{
	switch (n)
	{
	case 0: printf("Sunday"); break;
		case 1: printf("Monday"); break;
			case 2: printf("Thuesday"); break;
				case 3: printf("Wendsday"); break;
					case 4: printf("Thursday"); break;
						case 5: printf("Friday"); break;
							case 6: printf("Saturday"); break;
	

	default:
		break;
	}
}