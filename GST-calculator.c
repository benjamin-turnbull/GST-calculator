/* takes price and returns total with 10% GST tax added */

#include <stdio.h>

int main(void) {
    int price, tax;

    printf("Enter an amount: \n");
    scanf("%d", &price);

    tax = price / 10.0;

    printf("With GST added: %d \n", price + tax);
}
