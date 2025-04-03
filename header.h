#include <stdio.h>
extern const float AUDtoUSD;
extern const float AUDtoEuro;
enum Currency {AUD, USD, Euro};
enum Currency chooseCurrency(char *input);

float calcFee(enum Currency source, enum Currency y);
float reverseExchangeRate(float exchangeRate);
float getExchangeRate(enum Currency source, enum Currency y);
float calcExchange(enum Currency source, enum Currency y, float amount);