
// int main(){
//    for (int i=1;i<=100;i++){
//        if (i%5!=0){
//            printf("%d",i);
//        }
//    }
// }
// int main(){
//    int i=1;
//    while(i<50){
//        if (i%5==0){
//            i++;
//            continue;
//        }

//        printf("%d\n",i);
//        i++;
//    }
// }

// multiplication table where specific number is to be ommitted
// int main(){
//    int base,omit;
//    printf("Enter the base value: ");
//    scanf("%d",&base);
//    printf("Enter the number whose multiples are to be omitted: ");
//    scanf("%d",$omit);
//    for (int i=1;i<=50;i++){
//        if (i%omit==0){
//            continue;
//        }
//        printf("%d\n",base*i);
//    }
// }

// multiplication table where only multiples of a specific number are shown
// int main(){
//    int base,inc;
//    printf("Enter the base value: ");
//    scanf("%d",&base);
//    printf("Enter the number whose multiples are to be included: ");
//    scanf("%d",&inc);
//    for (int i=1;i<=50;i++){
//        if (i%inc==0){
//            printf("%d\n",base*i);
//        }

//    }
// }

// scan number digit limit
// int main(){
//    float  a;
//    scanf("%5f",&a);
//    printf("%f",a);
// }

// array creating
// int main(){
//    int arr[100];
//    for(int i=0;i<100;i++){
//        printf("Enter element: ");
//        int ele;
//        scanf("%d",&ele);
//        arr[i]=ele;
//    }
//    for(int i=0;i<100;i++){
//        printf("%d",arr[i]);
//    }
// }

// 3x4 matrix
// int main(){
//    float matrix[3][4];

// }
// HW ** IMPORTANT **
// Consider an array with base address B. The elements amy be stored in row or column major.
// We have to find the address of the element / index mentioned Number of bytes=n
// Total number of rows=r
// Total number of columns=c

// int main() {
//    int B;  // base address
//    int n;  // number of bytes
//    int r;  // number of rows
//    int c;  // number of columns
//    int i;  // row index
//    int j;  // column index
//    int addr;  // address of element

//    // input the values of B, n, r, c, i, and j
//    printf("Enter the base address B: ");
//    scanf("%d", &B);
//    printf("Enter the number of bytes per element n: ");
//    scanf("%d", &n);
//    printf("Enter the number of rows r: ");
//    scanf("%d", &r);
//    printf("Enter the number of columns c: ");
//    scanf("%d", &c);
//    printf("Enter the row index i: ");
//    scanf("%d", &i);
//    printf("Enter the column index j: ");
//    scanf("%d", &j);

//    // calculate the address of ele
//    addr = B + (i * c + j) * n;
//    // output the address
//    printf("The address of the element at row %d and column %d is %d\n", i, j, addr);

// }
