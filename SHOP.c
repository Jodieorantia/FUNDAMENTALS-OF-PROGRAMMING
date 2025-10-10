#include <stdio.h>

int main() {
    char choice;
    do {
        int 
        vegQty, fruitQty, milkQty, soapQty, shampooQty;
        float vegPrice = 54.5, 
        fruitPriceLow = 120, 
        fruitPriceHigh = 150, 
        milkPrice = 90, 
        soapPrice = 29.45,
        shampooPrice = 140;
        float fruitPrice; 
        float total, cash, change;

       printf("What do you want to purchase?\n");

        printf("Vegetable (P54.5/kilo) = ");
        scanf("%d", &vegQty);

        printf("Fruits (120-150/kilo)\n");
        printf("Enter fruit price (between 120 and 150): ");
        scanf("%f", &fruitPrice);
        
        if(fruitPrice < fruitPriceLow || fruitPrice > fruitPriceHigh) {
            printf("Invalid price. Setting to 120.\n");
            fruitPrice = 120;
        }
        printf("Quantity of fruits (kilo) = ");
        scanf("%d", &fruitQty);

        printf("Milk (P90/pack) = ");
        scanf("%d", &milkQty);

        printf("Soap (P29.45/bar) = ");
        scanf("%d", &soapQty);

        printf("Shampoo and Conditioner (P140/bottle) = ");
        scanf("%d", &shampooQty);

        total = (vegQty * vegPrice) +
                (fruitQty * fruitPrice) + 
                (milkQty * milkPrice) + 
                (soapQty * soapPrice) + 
                (shampooQty * shampooPrice);

        printf("\nTotal purchase: P%.2f\n", total);

        printf("Enter your payment: P");
        scanf("%f", &cash);

        if(cash < total) {
            printf("\nInsufficient payment! You are short by P%.2f\n", total - cash);
        } else {
            change = cash - total;
            printf("Your change: P%.2f\n", change);
        }
        printf("\nDo you want to purchase again (Y/N)? ");
        scanf(" %c", &choice);

    } while(choice == 'Y');
    printf("\nThank you for shopping!\n");
    
    return 0;

}


