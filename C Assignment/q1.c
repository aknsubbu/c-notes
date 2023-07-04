#include "stdio.h"
// Write a recursive function to calculate the power of a given number (x^n), where both x and n are
// integers.
#include "stdio.h"
// x is the base value and n is the number to which x is supposed to be raised
int power(int x,int n){
    if (n==0){
        return 1;
    }
    return x*power(x,n-1);
}

int main(){
    int x,n;
    printf("Enter the base value: ");
    scanf("%d",&x);
    printf("Enter the power value: ");
    scanf("%d",&n);
    printf("%d^%d = %d\n",x,n,power(x,n));
    return 0;
}