#include <stdio.h>
struct Item{
    char name[20];
    int price;
    int quantity;
};
void main(){
    FILE *ptr;
    struct Item x;
    ptr=fopen("items.bin","rb");
    fread(&x,sizeof(x),1,ptr);
    printf("Name: %s\nPrice: %d\nQuantity: %d\n",x.name,x.price,x.quantity);
}