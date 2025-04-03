#include <stdio.h>
#include "header.h"

float reverseExchangeRate(float exchangeRate){
	return exchangeRate/1;
}
float getExchangeRate(enum Currency source, enum Currency y){
	if(source==y) return 1;
	if(source == AUD) {
		if(y==USD) return AUDtoUSD;
		else return AUDtoEuro;
	}
	if(source == USD) {
		if(y==Euro) return AUDtoUSD/AUDtoEuro;
		else return reverseExchangeRate(AUDtoUSD);
	}
	if(source == Euro) {
		if(y==USD) return AUDtoEuro/AUDtoUSD;
		else return reverseExchangeRate(AUDtoEuro);
	}
}
float calcFee(enum Currency source, enum Currency y) {
	float result = 0;
	if ((source | y) == (AUD | USD)) {
		result=1;
	}
	if ((source | y) == (AUD | Euro)) {
		result=2.5;
	}
	if ((source | y) == (Euro | USD)) {
		result=3;
	}
	return result * 0.01;
}
float calcExchange(enum Currency source, enum Currency y, float amount) {
	float exchangeRate = getExchangeRate(source, y)-calcFee(source, y);
	float result =exchangeRate*amount;
	return result;
}