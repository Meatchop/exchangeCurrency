gcc main.c chooseCurrency.c currencyFunctions.c -o main

A foreign exchange trader handles three types of currencies AU$, US$ and EUR. Every morning,
you receive from the National Australian Bank (NAB) the exchange rates of the day from the AU$
to US$, and from the AU$ to EUR.
The trader has approached you to write for him/her a computer program so that when a client
comes in, he only needs to specify the source currency (i.e., the currency that the client brought
in), the target currency (the currency to which the client wants to change), and the amount he
wants to change. The program then automatically calculates the amount the client would receive
in the target currency.
A) Write a C program that does the task above.
B) Assume now that the trader will charge commission of 1% on the target currency when the
exchange is from AU$ to US$ or from US$ to AU$, 2.5% if it is from AU$ to EUR and from EUR to
AU$, and 3% if it is from US$ to EUR or EUR to US$. Extend the program you wrote in A) so that
the amount received by the client takes into account the commission charged by the trader. 
