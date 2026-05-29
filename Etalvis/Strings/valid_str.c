#include<stdio.h>
#include<string.h>
int main(){
    char str[51];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int num=1;
    for(int i=0;str[i]!='\0';i++){
        if(!(str[i] >= '0' && str[i] <= '9')){
            printf("Invalid");
            num=0;
            break;
        }
    }
    if(num==1)
    printf("Valid");
}