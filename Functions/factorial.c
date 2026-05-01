#include<stdio.h>
void print(int);
int main(){
    int num,dec;
    scanf("%d",&num);
    print(num);
    return 0;
}
void print(int m){
    for(int i=m;i>=1;i--){
        printf("%d\n",i);
    }
    
}