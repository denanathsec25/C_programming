#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int currentlen=0;
    int max_len=0;
    int start=0;
    int max_start=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    for(int i=0;i<strlen(str);i++){
        
        if(str[i]==32){
            currentlen=0;
            start=i+1;
        }
        else{
            currentlen++;
        }
        if(currentlen>max_len){
            max_len = currentlen;
            max_start=start;
        }
    }
    for(int i= max_start;;i++){
        if(str[i]==32){
            break;
        }
        else{
            printf("%c",str[i]);
        }
    }
    printf("\n");
    printf("maximum length of a word in string is: %d",max_len);
}