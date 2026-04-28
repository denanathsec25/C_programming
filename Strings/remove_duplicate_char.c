#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    strlwr(str);
    
    int hash[1000]={0};
    
    for(int i=0;i<strlen(str);i++){
        hash[str[i]]++;
    }
   for(int i=0;i<strlen(str);i++){
        if(hash[str[i]]>0){
            printf("%c",str[i]);
            hash[str[i]]=0;
        }
   } 
   
}