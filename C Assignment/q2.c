#include <stdio.h>
// Implement a function that accepts a string and returns a dynamically allocated array of characters
// containing the unique characters in the string, sorted in ascending order.
char * uniquesort(const char* str){
    int len=strlen(str);
    char * uniquechars=(char*)malloc((len+1)*sizeof(char));
    int uniqueindex=0;
    for(int i=0;i<len;i++){
        char currentchar=str[i];
        int found=0;
        for(int j=0;j<uniqueindex;j++){
            if (uniquechars[j]==currentchar){
                found=1;
                break;
            }
        }
        if (found==0){
            uniquechars[uniqueindex]=currentchar;
            uniqueindex++;
        }

    }
    for(int i=0;i<uniqueindex;i++){
        for(int j=i+1;j<uniqueindex;j++){
            if (uniquechars[i]>uniquechars[j]){
                char temp=uniquechars[i];
                uniquechars[i]=uniquechars[j];
                uniquechars[j]=temp;
            }
        }
    }
    uniquechars[uniqueindex]='\0';
    return uniquechars;

}

int main(){
    char * str="Hello World";
    char * uniquechars=uniquesort(str);
    printf("%s\n",uniquechars);
    free(uniquechars);
    return 0;
}