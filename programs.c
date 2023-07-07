#include <stdio.h>

struct Item{
    char name[20];
    int price;
    int quantity;
};
void main(){
    FILE *ptr;
    int n=5;
    struct Item x[5]={
        {"Apple",
        100,
        10},
        {
        "Banana",
        50,
        20},
        {
        "Orange",
        80,
        30},
        {
        "Mango",
        120,
        40},
        {
        "Grapes",
        150,
        50
    
        }
    };
    ptr=fopen("items.bin","wb");
    fwrite(&x,sizeof(struct Item),n,ptr);
}