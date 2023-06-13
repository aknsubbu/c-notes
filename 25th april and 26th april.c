#include <stdio.h>

// 25th april

// program to find the avg of an array of 100 elements
// int main(){
//    int arr[100];
//    for (int i=0;i<100;i++){
//        printf("Enter the %d element: ",i);
//        scanf("%d",&arr[i]);
//    }
//    int sum=0;
//    for (int x=0;x<100;x++){
//        sum=sum+arr[x];
//    }
//    int avg=sum/100;
//    printf("The average of the 100 numbers is %d",avg);

// }

// program to swap adjacent elements in an array
// int main(){
//    int size;
//    printf("Enter the size of the array: ");
//    scanf("%d",&size);
//    int arr[size];
//    // filling the arr
//    for(int i=0;i<size;i++){
//        int x;
//        printf("Enter the element: ");
//        scanf("%d",&x);
//        arr[i]=x;
//    }
//    //swapping
//    for (int j=0;j<size;j=j+2){
//        int temp1=arr[j];
//        int temp2=arr[j+1];
//        int temp3=arr[size-1];
//        arr[j]=temp2;
//        arr[j+1]=temp1;
//        arr[size-1]=temp3;
//    }
//    //printing the arr
//    for (int s=0;s<size;s++){
//        printf("%d",arr[s]);
//    }
// }

// declare  array of 3x2 format and get input, print and sum
// int main(){
//    int arr1[3][2];
//    int sum=0;
//    for (int i=0;i<3;i++){
//        for (int j=0;j<2;j++){
//            printf("Enter the element: ");
//            scanf("%d",&arr1[i][j]);
//        }
//    }
//    for (int i=0;i<3;i++){
//        for (int j=0;j<2;j++){
//            printf("%d  ",arr1[i][j]);
//        }
//        printf("\n");
//    }
//    for (int i=0;i<3;i++){
//        for (int j=0;j<2;j++){
//            sum=sum+arr1[i][j];
//        }
//    }
//    printf("%d",sum);
// }

// print the address of an array and prove if it uses row major or column major
// int main(){
//        int arr1[3][2];
//        for (int i=0;i<3;i++){
//            for (int j=0;j<2;j++){
//                printf("Enter the element: ");
//                scanf("%d",&arr1[i][j]);
//            }
//        }
//        for (int i=0;i<3;i++){
//            for (int j=0;j<2;j++){
//                printf("%d  ",&arr1[i][j]);
//            }
//            printf("\n");

//        int pos1=&arr1[0][0],pos2=&arr1[0][1];
//        if (pos1==pos2+4){
//            printf("row major");
//        }
//        }
// }

// print an upward triangular matrix and a lower triangular matrix
// int main(){
//    int arr1[3][3];
//    int arr2[3][3];
//    //upward triangle
//    for (int i=0;i<3;i++){
//        for (int j=i;j<3;j++){
//            printf("Enter element");
//            scanf("%d  ",&arr1[i][j]);
//        }
//        printf("\n");
//    }
//    //lower triangle
//    for (int j=0;j<3;j++){
//        for (int i=0;i<j=;i++){
//            printf("Enter element");
//            scanf("%d  ",&arr2[i][j]);
//        }
//        printf("\n");
// }}

// 26th april

// mat