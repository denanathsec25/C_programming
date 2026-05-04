#include<stdio.h>
int disp_odd(int);
int main(){
    int a;
    scanf("%d",&a);
    disp_odd(a);
    return 0;
}
int disp_odd(int m){

    for(int i=1;i<=m;i++){

        if(i%2==1){
            printf("%d\n",i);
        }

    }
    
}