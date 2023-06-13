#include <stdio.h>
#include <conio.h>
#include "stdlib.h"
#include "string.h"
//
// Created by nnsub on 02-05-2023.
//
// swtich case statement
// create menu ask for arthemetic operations
//void calcMenu (){
//    char c;
//    int result;
//    int a,b;
//    do{
//    printf("Add\n");
//    printf("Subtract\n");
//    printf("Multiply\n");
//    printf("Divide\n");
//    printf("End\n");
//    printf("Enter the starting letter of your chosen operation in lowercase: ");
//    scanf("%c",&c);
//    printf("Enter number 1: ");
//    scanf("%d",&a);
//    printf("Enter number 2: ");
//    scanf("%d",&b);
//
//
//    switch (c){
//        case 'a':
//            printf("The sum of the two numbers are: %d",a+b);
//            break;
//        case 's':
//            printf("The difference between the two numbers are: %d",a-b);
//            break;
//        case 'm':
//            printf("The product of the two numbers are: %d",a*b);
//            break;
//        case 'd':
//            printf("The quotient of the two number after divison is: %d \n",a/b);
//            break;
//    }
//    }while(c!='e');
//}
//
//// find all submatrices that are all 1's. have to count anything greater than 1x1. show the largest
//// NOT COMPLETED
//void subMatrices(){
//    int row,column;
//    printf("Enter th number of rows of your matrix:");
//    scanf("%d",&row);
//    printf("Enter the number of columns of your matrix:");
//    scanf("%d",&column);
//    int matrix[row][column],pos[row][column];
//    for(int i=0;i<row;i++){
//        for(int j=0;j<column;j++){
//            printf("Enter element[%d][%d]: ",i,j);
//            scanf("%d",&matrix);
//
//        }
//    }
//    for(int i=0;i<row;i++){
//        for(int j=0;j<column;j++){
//            if (matrix[i][j]==1){
//                pos[i][j]=1;
//            } else{
//                pos[i][j]=0;
//            }
//
//        }
//    }
//
//}
//
//// get charecter as input using scanf
//void getCharUsingScanf(){
//    char c;
//    printf("Enter your charecter: ");
//    scanf("%c",&c);
//}
//// getchar function prototype
//void getCharUsinggetchar(){
//    char c;
//    printf("Enter your charecter: ");
//    c=getchar();
//    printf("%c",c);
//}
//// getch function prototype
//void getcharUsinggetch(){
//    char c;
//    printf("Enter your charecter: ");
//    c=getch();
//    printf("%c",c);
//}
//// getch function prototype
//void getcharUsinggetche(){
//    char c;
//    printf("Enter your charecter: ");
//    c=getche();
//    printf("%c",c);
//}
//
////Get the input for one string without spaces using gets
//void getstringUsinggets(){
//    char c[10];
//    printf("Enter your string: ");
//    gets(c);
//    printf("%s",c);
//}
////Get one input of a string with spaces
//void getstrWithSpaces(){
//char str[100];
//printf("Enter a string with spaces: ");
//scanf("%[^\n]s", str);
//printf("You entered: %s\n", str);
//}
////Get paragraph as input
//void getpara(){
//    int max_length;
//    printf("Enter the max length of the paragraph: ");
//    scanf("%d",&max_length);
//    char para[max_length];
//    char line[100];
//    int length=0;
//    printf("Enter paragraph: ");
//    while(fgets(line,sizeof(line),stdin)!=NULL){
//        strcat(para,line);
//        length+=strlen(line);
//        if(length>=max_length-1){
//            break;
//        }
//    }
//    printf("The para: %s",para);
//}
//
////get input until "d" is pressed
//void dpressed(){
//    char input;
//    printf("Enter input (press 'd' to exit):\n");
//    while ((input = getchar()) != 'd') {
//        printf("You entered: %c\n", input);
//    }
//}
//
//
///*
// Ternary Operators
// variable= (conditon)?var1:var2
// works as checks against condition having var 1 and var 2 for example and returns one var based on the true or false eval
// */
//
//void TernaryOperation(){
//    //example
//    int max =(1<2)?1:2;
//    // check for odd or even
//    int a;
//    printf("Enter the number 'a' for odd or even check: ");
//    scanf("%d",&a);
//    (a%2==0)?printf("Even"):printf("Odd");
//    //find the greatest of  three numbers suing only ternary operator
//    printf("Greatest between three numbers computation");
//    int x,y,z;
//    printf("Enter the number 'x': ");
//    scanf("%d",&x);
//    printf("Enter the number 'y': ");
//    scanf("%d",&y);
//    printf("Enter the number 'z': ");
//    scanf("%d",&z);
//    (x>y && x>z)?printf("x is maximum"):(y>x && y>z)?printf("b is maximum"):(z>x && z>y)?printf("z is the greatest"):printf("Error");
//}
//
//// bitwise operations
//void bitWise(){
//    char a=5,b=1,zero=0;
//    printf("%d\n",a&b);
//    printf("%d\n",a&&b);
//    printf("%d\n",a|b);
//    printf("%d\n",a^b);
//    printf("%d\n",~b);
//    printf("%d\n",a<<b);
//    printf("%d",a>>b);
//    printf("%d",~zero);
//}
//
//
//void formatSpecifier(){
//    char x[100];
//    scanf("%[a-zA-z ]",x);
//    scanf("%[^+-/*]",x);
//}
//
//
//
///*
// Find the missing number
// swap two numbers without using a temporary variable
// find the element that appears only once
// XOR OPERATIONS
// Lookup string functions
//
//
// */
//
//
//// ASSIGNMENT
////Write a program to find the sum of the digits of a given number using a while loop.
//void sumofDigits(){
//    int n,q,r,sum=0;
//    printf("enter the number: ");
//    scanf("%d",&n);
//    while(n>0){
//        r=n%10;
//        q=n/10;
//        n=q;
//        sum=sum+r;
//    }
//    printf("%d",sum);
//}
//
////Write a program that takes a character as input and uses the ternary operator to print
////whether the character is a vowel or a consonant.
//void vowelTernary(){
//    char x;
//    printf("Enter the charecter: ");
//    x=getche();
//    char vowel[5]={'a','e','i','o','u'};
//    for(int i=0;i<5;i++){
//        if(x==vowel[i]){
//            printf("%c is a vowel",x);
//        } else{
//            printf("%c is a consonant",x);
//        }
//    }
//}
//
////Write a program that takes an integer as input, which represents a month number (1-12),
////and uses the switch statement to print the corresponding month name.
//void switchMonthName(){
//    int x;
//    printf("Enter the number of the month: ");
//    scanf("%d",&x);
//    switch(x){
//        case 1:
//            printf("January");
//            break;
//        case 2:
//            printf("February");
//            break;
//        case 3:
//            printf("March");
//            break;
//        case 4:
//            printf("April");
//            break;
//        case 5:
//            printf("May");
//            break;
//        case 6:
//            printf("June");
//            break;
//        case 7:
//            printf("July");
//            break;
//        case 8:
//            printf("August");
//            break;
//        case 9:
//            printf("September");
//            break;
//        case 10:
//            printf("October");
//            break;
//        case 11:
//            printf("November");
//            break;
//        case 12:
//            printf("December");
//            break;
//
//
//
//    }
//}
//
//
//// Write program to print pattern
////    *
////   * *
////  * * *
////   * *
////    *
//void Pattern(){
//    int n;
//    printf("Enter the value of n: ");
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n-i; j++) {
//            printf(" ");
//        }
//        for (int j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//    for (int i = n-1; i >= 1; i--) {
//        // Print the spaces
//        for (int j = 1; j <= n-i; j++) {
//            printf(" ");
//        }
//        for (int j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//}
////Write a program to check if it is a palindrome
//
//
////program
//void program() {
//    int arr[10]={2,3,4};
//    int index=2;
//    int size=3;
//    int elements[]={5,6,7};
//    int elesize= sizeof(elements)/sizeof(elements[0]);
//    for(int i=size-1;i>=index;i--){
//        arr[i+elesize]=arr[i];
//    }
//    for(int i=0;i<elesize;i++){
//        arr[index+i]=elements[i];
//    }
//
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//int isFactor(int a,int b){
//    if (a%b==0){
//        return(1);
//    } else{
//        return(0);
//    }
//}
//
//int isPrime(int x){
//    scanf("%d",&x);
//    for (int i=0;i<((x/2)+1);i++){
//        if(isFactor(x,i)){
//            continue;
//        } else{
//            return(0);
//        }
//    }
//    return(1);
//}
//
//int PrimeRange(int s,int e){
//    for (int i=s;i<(e+1);i++){
//        if(isPrime(s)){
//            printf("%d is a prime",i);
//        }else{continue;}
//    }
//}
//
//int sort(int x[]){
//    for (int i=0;i<3;i++){
//        for(int j=0;j<(4);j++){
//        printf("%d",x);}
//    }
//    return 0;
//}
////int main(){
////    int num[][4]={1,2,3,4,5,6,7,8,9,10};
////    sort(num);
////}
///*
// * A stack is built using last in first out logic
// * It has push and pop operations where we can control only the top-most element of the stack
// * The top  pointer shows the top-most element of the stack*/
///*facotrial and fibonacci using recursion and tower and hanoi*/
////factorial using recursion
//int factorial(int n){
//    if(n==0){
//        return 1;
//    } else{
//        return (n*factorial(n-1));
//    }
//}
//
////fibonacci using recursion
//int fibonacci( int n) {
//    if (n <= 1){
//        return n;}
//    else
//        return (fibonacci(n - 1) + fibonacci(n - 2));
//}
//
////tower of hanoi
//void towerOfHanoi(int n, char source, char auxiliary, char destination) {
//    if (n == 1) {
//        printf("Move disc 1 from %c to %c\n", source, destination);
//        return;
//    }
//
//    towerOfHanoi(n - 1, source, destination, auxiliary);
//    printf("Move disc %d from %c to %c\n", n, source, destination);
//    towerOfHanoi(n - 1, auxiliary, source, destination);
//}
//
//
//// struc example
///*
// * Structures
// * --------EXAMPLE--------
// * struc students{
// * char name[50],
// * rollno[7],
// * int age,
// * float marks[6]};
// * Each element like name , age etc... are called stucture members
// * Finish the declaration with a semicolon
// * A structure member can be accessed only through a structure variable using the dot operator */
//struct students{
//         char name[50];
//        char rollno[7];
//         int age ;
//        float marks[6];    };
//int mainimplement(){
//    struct students s;
//    gets(s.name);
//    scanf("%d",&s.age);
//    gets(s.rollno);
//    for (int i=0;i<6;i++){
//        scanf("%d",&s.marks[i]);
//    }
//
//}

//auto and global variable illustration did not understand
//void test(){
//    extern int i;
//    i++;
//    printf("%d",i);
//}
//int main(){
//    test();
//    printf("%d",i);
//    test();
//}
//int i=10;
//

//
// copy contents of a string
//void copy(char org[], char new[]){
//    strcpy(new,org);
//}
//
//
//// create a struc and print its contents
//
//struct Student{
//    char name[50],rollno[6],phno[10];
//    int age;
//    float marks[5];
//}e,s = {"Anand","22Z209","9384870740",18,{100,100,100,100,100}};
//
//int main(){
//    //struct Student s;
//    printf("Enter name, roll no, phone number, age and marks in 5 subjects: ");
//    printf("Name: %s\nRoll No: %s\nPhone Number: %s\nAge: %d\nMarks in 5 subjects: %f %f %f %f %f",s.name,s.rollno,s.phno,s.age,s.marks[0],s.marks[1],s.marks[2],s.marks[3],s.marks[4]);
//    printf("\n%s",s.rollno);
//}
//void structProgram3(){
//    struct Student e={.name='Anand',.rollno='22Z209',.phno='9384870740',.age=18,.marks={100,100,100,100,100}};
//    printf("Enter name, roll no, phone number, age and marks in 5 subjects: ");
//    printf("Name: %s\nRoll No: %s\nPhone Number: %s\nAge: %d\nMarks in 5 subjects: %f %f %f %f %f",e.name,e.rollno,e.phno,e.age,e.marks[0],e.marks[1],e.marks[2],e.marks[3],e.marks[4]);
//    printf("\n%s",e.rollno);
//}
//
//
//
//struct Person{
//    char name[50];
//    float height;
//    int age;
//}p[3] = {{"guy1",185,85},{"guy2",175,75},{"guy3",165,65}};
//
//int main(){
//    printf("%s\n",p[0].name);
//    printf("%f\n",p[0].height);
//    printf("%d\n",p[0].age);
//    printf("%s\n",p[1].name);
//    printf("%f\n",p[1].height);
//    printf("%d\n",p[1].age);
//    printf("%s\n",p[2].name);
//    printf("%f\n",p[2].height);
//    printf("%d\n",p[2].age);
//
//}
//
//
//struct Student {
//    char name[50], rollno[6], phno[10];
//    int age;
//    float marks[5];
//};
//
//void calculateAveragePerStudent(struct Student student) {
//    float sum = 0;
//    for (int i = 0; i < 5; i++) {
//        sum += student.marks[i];
//    }
//    float average = sum / 5;
//    printf("Average marks for student %s: %.2f\n", student.name, average);
//}
//
//void calculateAverageForArray(struct Student students[], int size) {
//    float sum = 0;
//    int totalMarks = 0;
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < 5; j++) {
//            sum += students[i].marks[j];
//            totalMarks++;
//        }
//    }
//
//    float average = sum / totalMarks;
//    printf("Average marks for the entire array: %.2f\n", average);
//}
//
//int main(){
//    struct Student students[3]={{"Anand","22Z209","9384870740",18,{100,100,100,100,100,}},
//                                {"Anand","22Z209","9384870740",18,{100,100,100,100,100,}},
//                                {"Anand","22Z209","9384870740",18,{100,100,100,100,100,}}};
//    for (int i=0;i<3;i++){
//        calculateAveragePerStudent(students[i]);
//    }
//    calculateAverageForArray(students,3)
//}




//// pointers in c
//int type1(){
//    int a;
//
//    int *ptr=&a;
//    printf("%d\n",a);
//    printf("%d",&a);}
//
//int type2(){
//    float f;
//    float* fptr=&f;
//    printf("Enter f:");
//    scanf("%f",&f);
//    printf("%f\n",f);
//    printf("%p\n",&f);
//    printf("%f",*fptr);}
//
//
//int type3(){
//int n1[4]={1,2,3,4},n2=6;
//int *p1=&n1;
//int *p2=&n2;
//printf("%d \n %d \n %d \n %d \n %d  \n %p\n %p \n",n1[0],n1[1],n1[2],n1[3],n2,p1,p2);
//    printf("%d \n %d \n %d \n %d \n %d  \n %p\n %p \n",&n1[0],&n1[1],&n1[2],&n1[3],&n2,&p1,*p2);
//    for(int i=0;i<4;i++){
//        printf("%d",*(p1++));
//    }
//}


// takw a charecter pointer as input and display it
//int main(){
//    char *s="hello";
//    printf("%s",s);
//
//}

//take array as input and print it
int main(){
    int arr[10];
    for (int i=0;i<10;i++){
        printf("Enter the element number %d: ",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}
int add(int *a,int i,int size){
    for (int x = 0; x < size; x++){
        (*a + x) += i;
    }

}