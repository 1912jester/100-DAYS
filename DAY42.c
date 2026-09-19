#include<stdio.h>
int main(){
    int i;
    char sentence[100];
    printf("Enter your name:");
    fgets(sentence,sizeof(sentence),stdin);
    
    printf("NAME=%s \n",sentence);
    for(int i=0; sentence[i]!='\0';i++){
    }
    printf("Length of string=%d",i);
    return 0;
}