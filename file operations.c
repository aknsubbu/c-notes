#include <stdio.h>
void main(){
    int pos;
    char str[100],data[100];
    FILE *ptr;
    ptr=fopen("text.txt","r");
while(fgets(data,sizeof(data),ptr)){
    pos=ftell(ptr);
    printf("%s\n",str);
    printf("Positon of the pointer is: ")
    printf("%d\n",pos);
}


}
