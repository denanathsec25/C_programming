#include<stdio.h>
int n(int);
int main(){
    int num,dec;
    scanf("%d",&num);
    n(num);
    return 0;
}
int n(int m){
    for(int i=1;i<=m;i++){
        printf("%d\n",i);
    }
    
}