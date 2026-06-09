#include<stdio.h>
int main(){
    char s[6]= "Hello"; // or use s[]="something"; which will automatically  initialize the size with null char
    char t[6];
    int i;
    for(i =0;s[i]!=0;i++){
        t[i]=s[i];
    }
    t[i]=0;
    printf("%s",t);
}