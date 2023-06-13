// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
//  Take a number as input and apply postfix increment to it
//  int main(){
//     int a=1,b=5,c;
//     c=b++;
//     printf("b=%d\n",b);
//     printf("c=%d",c);
//  }
//  Take a charecter as an input and print its value until 13 is entered
//  int main(){
//     char a;
//     a=getchar();
//     while(a!=13){
//         printf("%c",a);
//         a=getchar();
//     }
//  }
//
//  number pyramid
//  void numberPyramid(){
//     int num;
//     printf("Enter the number of rows you want: ");
//     scanf("%d",&num);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j=<num-i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf('* ');
//         }
//         printf("\n");
//     }
//  }
//  write a program to print numbers from 1 to 10 and repeat from form till end number is given
//  int main(){
//     int n,num_count;
//     printf("Enter the number of digits to be printed: ");
//     scanf("%d",&n);
//     num_count=0;
//     while (num_count<n){
//         for (int i=0;i<5;i++){
//             if (num_count<n){
//                 num_count++;
//             } else {
//                 break;
//             }
//             printf("%d",i);
//         }
//     }
//  }
//
////problem 1 number pyramid
// #include <stdio.h>
//
// int main(){
//     int n;
//     printf("Enter the number of lines: ");
//     scanf("%d",&n);
//     for(int i = 1;i <= n;i++){
//         for(int l = n-i;l >0;l--){
//             printf(" ");
//         }
//         for(int j = 1;j <= i;j++){
//             printf("%d ",j);
//         }
//         for(int k = i-1;k >= 1;k--){
//             printf("%d ",k);
//         }
//         printf("\n");
//     }
// }
//// problem 2
// #include <stdio.h>
//
// int main(){
//     int totalnum,start,end;
//     printf("Enter the total number of digits printed: ");
//     scanf("%d",&totalnum);
//     printf("Enter a start number: ");
//     scanf("%d",&start);
//     printf("Enter a end number: ");
//     scanf("%d",&end);
//     for(int i = 0;i<totalnum;i++){
//         printf("%d ",(i%(end-start+1))+start);
//     }
// }