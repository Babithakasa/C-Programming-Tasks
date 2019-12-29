#include<stdio.h>
int main()
{
	int x;
	printf("Enter a num from 1-5  ",x);
	scanf("%d",&x);
	switch (x)
	{
		case 1:printf("Use the default case.");
		        break;
		case 2: printf("Food item-Pizza/n Price-Rs 239/n");
		        break;
		case 3: printf("Food item-French Fries/n Price-Rs 99/n");
		        break;
		case 4: printf("Food item-Sandwich/n Price-Rs 149/n");
		        break;
		case 5: printf("Food item-Burger/n Price-Rs 129/n");
		        break;
		default: printf("6 : Food item-Pasta/n Price-Rs 179/n");
	}
	return 0;
}

