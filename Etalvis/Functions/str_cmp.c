#include<stdio.h>
#include<string.h>

void strcomp(char *src, char *dst);

int main(){
    char src[100];
    char dst[100];

    fgets(src, sizeof(src), stdin);
    fgets(dst, sizeof(dst), stdin);

    strcomp(src, dst);

    return 0;
}

void strcomp(char *src, char *dst){
    if(strcmp(src, dst) == 0){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}