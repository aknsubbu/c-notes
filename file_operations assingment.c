// program to read and sort all the lines in a file and write it back to the file
#include <stdio.h>
void main(){
    FILE *ptr;
    char str[100][100],temp[100];
    int i=0,j=0,n;
    ptr=fopen("file.txt","r");
    while(fgets(str[i],100,ptr)!=NULL){
        i++;
    }
    n=i;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    fclose(ptr);
    ptr=fopen("file.txt","w");
    for(i=0;i<n;i++){
        fputs(str[i],ptr);
    }
    fclose(ptr);
}

// program to encrypt the content of a file using simple ecryption alogrithm
#include <stdio.h>
void main(){
    FILE *ptr;
    char ch;
    ptr=fopen("file.txt","r+");
    while((ch=fgetc(ptr))!=EOF){
        ch=ch+100;
        fseek(ptr,-1,SEEK_CUR);
        fputc(ch,ptr);
    }
    fclose(ptr);
}

//program to calcluate the average of the numbers stored in a file
#include <stdio.h>
void main(){
    FILE *ptr;
    int n,i,sum=0;
    float avg;
    ptr=fopen("file.txt","r");
    while(fscanf(ptr,"%d",&n)!=EOF){
        sum=sum+n;
        i++;
    }
    avg=(float)sum/i;
    printf("Average is %f",avg);
    fclose(ptr);
}