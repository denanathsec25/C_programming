#include<stdio.h>
int disp_descent(int);
int main(){
    int num=5;
    disp_descent(num);
    return 0;
}
int disp_descent(int m){
    for(int i=m;i>=1;i--){
        printf("%d\n",i);
    }
    
}