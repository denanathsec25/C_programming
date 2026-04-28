#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int hash[1000]={0};
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    for(int i=0;i<strlen(str);i++){
        hash[str[i]]++;
    }
    for(int i=97;i<=122;i++){
        for(int j=0;j<hash[i];j++){
            if(hash[i]>0){
                printf("%c",i);
                
            }
        }
    }

}