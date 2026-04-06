#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    char rev[100];
    int flag =0;
    for(int i=0;i<len;i++){
        rev[i]=str[len-i];
    }
    for(int i=0;i<len;i++){
        if(str[i]==rev[i]){
            continue;
        }
        else{
            printf("Not a palindrome");
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Palindrome");
    }
}