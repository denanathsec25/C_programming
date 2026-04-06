#include<stdio.h>
#include<string.h>
int main(){
     char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        int ascii =str[i];
        if(ascii>=65 && ascii <=90){
            str[i]=ascii+32;
            printf("%c",str[i]);
        }
        else if(ascii>=97 && ascii <=122){
            str[i]=ascii-32;
            printf("%c",str[i]);
        }
        else{
            printf("%c",str[i]);
        }
    }
}