#include <stdio.h>

int main() {
    double priceOfItem;
    float discountPercent;
    int unitsPurchased;
    double discountInPrice;
    double totalAmount;
    
    printf("Price Of Item: ");
    scanf("%lf", &priceOfItem);
    printf("Discount Percent: ");
    scanf("%f", &discountPercent);
    printf("Units Purchased: ");
    scanf("%d", &unitsPurchased);
    
    
    discountInPrice = ( ( discountPercent / 100 ) * priceOfItem ) * unitsPurchased;
    totalAmount = ( priceOfItem * unitsPurchased ) - discountInPrice;
    printf("Total Amount After ");
    printf(" Discount On Your Purchase: ");
    printf("%f", totalAmount);
    
    return 0;
}
