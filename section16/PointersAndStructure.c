// write a c program that creates a structure pointer and passes it to a function
// create a structure named item withe the following member
// itemName - pointer
// quantity - int
// price - float
// amount - floats (stores quantity * price)

#include <stdio.h>
#include <stdlib.h>

struct Item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item *item);
void printItem(struct Item *item);

int main(int argc, char const *argv[])
{
    struct Item item;
    struct Item *pItem = &item;
    readItem(pItem);
    printItem(pItem );

    free(item.itemName);

    return 0;
}

void readItem(struct Item *item){

    item ->itemName = malloc((100+1) * (sizeof(char)));

    printf("Enter item name: ");
    scanf("%[^\n]%*c", item ->itemName);

    printf("\nEnter item quantity: ");
    scanf("%i", &item ->quantity);

    printf("\nEnter item price: ");
    scanf("%f", &item -> price);

    item -> amount = item ->quantity * item ->price;

}

void printItem(struct Item *item){
    printf("\nItem name: %s", item ->itemName);
    printf("\nItem quantity: %i", item ->quantity);
    printf("\nItem price: %.2f", item ->price);
    printf("\nItem amount: %.2f", item ->amount);
}
