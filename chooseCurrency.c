#include <stdio.h>
#include "header.h"
#include <string.h>
const float AUDtoUSD = 0.63;
const float AUDtoEuro = 0.57;
enum Currency chooseCurrency(char *input) {
	if(strcmp(input, "aud") == 0) {
		return AUD;
	}
	if(strcmp(input, "usd") == 0) {
		return USD;
	}
	if(strcmp(input, "euro") == 0) {
		return Euro;
	}
}