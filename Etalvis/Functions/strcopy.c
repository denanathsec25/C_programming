#include<stdio.h>
#include<string.h>
void strcopy(char *,char *);
int main(){
    char src[50];
    char dst[50];
    fgets(src,sizeof(src),stdin);
    strcopy(src,dst);
    printf("%s",dst);
}

void strcopy(char *src,char *dst){
    for(int i=0;src[i]!='\0';i++){
        dst[i]=src[i];
    }
} 