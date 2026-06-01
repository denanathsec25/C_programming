#include<stdio.h>
#include<string.h>

void strcon(char *, char *, char *);

int main(){
    char src1[100];
    char src2[100];
    char dst[200];
    fgets(src1,sizeof(src1),stdin);
    fgets(src2,sizeof(src2),stdin);
    src1[strcspn(src1,"\n")] = '\0';
    src2[strcspn(src2,"\n")] = '\0';
    strcon(src1,src2,dst);
    printf("%s",dst);
    return 0;
}

void strcon(char *src1,char *src2,char *dst){
    strcpy(dst,src1);
    strcat(dst,src2);
}