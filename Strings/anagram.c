#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    int anagram=1;
    fgets(str,sizeof(str),stdin);
    fgets(str1,sizeof(str1),stdin);
    str[strcspn(str, "\n")] = '\0';
    str1[strcspn(str1, "\n")] = '\0';
    strlwr(str);
    strlwr(str1);
    int hash[1000]={0};
    int hash1[1000]={0};
    for(int i=0;i<strlen(str);i++){
        hash[str[i]]++;
    }
    for(int i=0;i<strlen(str1);i++){
        hash1[str1[i]]++;
    }
    for(int i= 97;i<=122;i++){
        if(hash[i]!=hash1[i]){
            anagram = 0;
            break;
        }
    }
    if(anagram ==0){
        printf("Not a anagram");
    }
    else{
        printf("Anagram");
    }
}