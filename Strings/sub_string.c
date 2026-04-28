#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    for(int i=0;i<strlen(str);i++){
        for(int j=i;j<strlen(str);j++){
            for(int k=i;k<=j;k++){
                printf("%c",str[k]);
            }
            printf("\n");
         }
    }
}