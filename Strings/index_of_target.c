#include<stdio.h>
#include<string.h>
int main(){
    int index;
    char str[100];
    char target[100];
    fgets(str,sizeof(str),stdin);
    fgets(target,sizeof(target),stdin);
    str[strcspn(str, "\n")] = '\0';
    target[strcspn(target, "\n")] = '\0';
    for(int i=0;i<strlen(str);i++){
        if(str[i]==target[0]){
            index=i;

        }
    }
    printf("%d",index);
    
}