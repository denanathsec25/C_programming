#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int start = 0;
    int end = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\r\n")] = '\0';

    for(int i = 0; i <= strlen(str); i++){
        if(str[i] == ' ' || str[i] == '\0'){
            end = i - 1;

            for(int j = end; j >= start; j--){
                printf("%c", str[j]);
            }

            if(str[i] == ' '){
                printf(" ");
                start = i + 1;
            }
        }
    }
    
    return 0;
}