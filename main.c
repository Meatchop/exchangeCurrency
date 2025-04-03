#include <stdio.h>

#include "header.h"
int main() {
	char charsSource[]="euro";
	char charsyY[]="usd";
	enum Currency source, y;
	float amount=100;
	source = chooseCurrency(charsSource);
	y = chooseCurrency(charsyY);
	float result = calcExchange(source, y, amount);
	printf("%s to % s = %.2f\n", charsSource, charsyY, result);
	printf("pres key to exit:");
	getchar();
	return(0);
}