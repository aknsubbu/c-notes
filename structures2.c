
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item{
    char name[100];
    int quantity;
    float price;
};
int findQuant(struct Item items[],int size){
    char str[100];
    printf("Enter the name of the element to find the price: ");
    gets(str);
    for(int i=0;i<size;i++){
        if(!(strcmp(str,items[i].name))){
            printf("The price of the item is: %f\n",items[i].price);
            printf("The quantity of the specified items are: %d\n",items[i].quantity);

        }
        else{
            printf("The element is not found");
        }
    }
}
void printallElements(struct Item items[], int size) {
    for (int i = 0; i < size; i++) {
        printf("__________________________________________________________\n");
        printf("Name: %s\n", items[i].name);
        printf("Quantity: %d\n", items[i].quantity);
        printf("Price: %.2f\n", items[i].price);
        printf("__________________________________________________________\n");
    }
}

struct Item* greaterThanN(struct Item* items, int size, int n, int* resultSize) {
    int count = 0;
    struct Item* new = (struct Item*)malloc(size * sizeof(struct Item));
    for (int i = 0; i < size; i++) {
        if (items[i].quantity >= n) {
            strcpy(new[count].name, items[i].name);
            new[count].quantity = items[i].quantity;
            new[count].price = items[i].price;
            count++;
        }
    }
    *resultSize = count;
    return new;
}

void executeGreaterThan(struct Item items[], int size) {
    int n;
    printf("Enter the threshold: ");
    scanf("%d", &n);
    int resultSize;
    struct Item* filteredItems = greaterThanN(items, size, n, &resultSize);

    printf("Items with quantity greater than or equal to %d:\n", n);
    for (int i = 0; i < resultSize; i++) {
        printf("Item: %s, Quantity: %d, Price: %.2f\n", filteredItems[i].name, filteredItems[i].quantity, filteredItems[i].price);
    }

    free(filteredItems);
}

void populate(struct Item* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for Item %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", array[i].name);

        printf("Quantity: ");
        scanf("%d", &array[i].quantity);

        printf("Price: ");
        scanf("%f", &array[i].price);

        printf("\n");
    }
}

void insertElements() {
    int n;

    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);

    struct Item* items = malloc(n * sizeof(struct Item));

    populate(items, n);

    printf("Inserted elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d:\n", i + 1);
        printf("Name: %s\n", items[i].name);
        printf("Quantity: %d\n", items[i].quantity);
        printf("Price: %.2f\n", items[i].price);
        printf("\n");
    }

    free(items);
}

struct Item ithElement(struct Item items[], int size) {
    int i;
    printf("Enter the index of the element: ");
    scanf("%d", &i);
    return items[i];
}

int main() {
    int choice;
    int size = 3;
    struct Item items[size];

    do {
        printf("Welcome to the Shop Control System\n");
        printf("___________________________________________\n");
        printf("1. Display all the elements in the shop\n");
        printf("2. Display the 'i'th element in the shop\n");
        printf("3. Insert 'n' elements into the list\n");
        printf("4. Display all elements greater than n in the shop\n");
        printf("5. Exit\n\n");
        printf("Enter the number of the operation you wish to perform: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printallElements(items, size);
                break;
            case 2:
                ithElement(items, size);
                break;
            case 3:
                insertElements();
                break;
            case 4:
                executeGreaterThan(items, size);
                break;
        }

    } while (choice != 5);

    return 0;
}
