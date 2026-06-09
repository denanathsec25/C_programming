#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],*p;
    for(p=a;p<=a+n-1;p++){
        scanf("%d",p);
    }

    for(p=a+n-1;p>=a;p--){
        printf("%d ", *p);
    }
    return 0;
}