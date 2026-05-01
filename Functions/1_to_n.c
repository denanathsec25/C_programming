#include<stdio.h>
int print(int);
int main(){
    int num,dec;
    scanf("%d",&num);
    print(num);
    return 0;
}
int print(int m){
    for(int i=1;i<=m;i++){
        printf("%d\n",i);
    }
    
}