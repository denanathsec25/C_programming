#include<stdio.h>
int disp_assent(int);
int main(){
    int num=5;
    disp_assent(num);
    return 0;
}
int disp_assent(int m){
    for(int i=1;i<=m;i++){
        printf("%d\n",i);
    }
    
}