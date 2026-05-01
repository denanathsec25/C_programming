#include<stdio.h>
int max(int,int);
int main(){
    int num,num1;
    scanf("%d",&num);
    scanf("%d",&num1);
    printf("%d",max(num,num1));
    

    return 0;
}
int max(int m,int n){
    int maxi;
    if(m>n){
        maxi=m;
    }
    else{
        maxi=n;
    }
    return maxi;
}