#include <stdio.h>
#include <stdlib.h>

#define SELL_PRICE_POINT 28.5
#define BUY_PRICE_POINT 24.5

double askStockValue(void);
void makeDecision(double value);
void handleTransaction(char action);

int main(void)
{
	double value = askStockValue();
	makeDecision(value);

	return 0;
}

double askStockValue ()
{
	printf("What is the stock current value: ");
	double value;
	scanf("%lf", &value);
	return value;
}

void makeDecision (double value)
{
	if (value < BUY_PRICE_POINT)
		handleTransaction('b');
	else
		if (value >= SELL_PRICE_POINT)
			handleTransaction('s');
		else
			handleTransaction('h');
}

void handleTransaction (char action)
{
	switch (action)
	{
		case 'b': 
			printf("I suggested you buy more of this stock\n");
			break;
		case 's':
			printf("I suggested you sell this stock\n");
			break;
		case 'h':
			printf("Lets's wait and see what the market will do it\n");
			break;
		default:
			printf("Sorry I cannot provide any advice right now\n");
	}
}
