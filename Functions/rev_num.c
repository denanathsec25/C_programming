#include<stdio.h>
#include<math.h>
int rev(int);
int main(){
    int num;
    scanf("%d",&num);
    int rev1 = rev(num);
    printf("%d",rev1);
    return 0;
}
int rev(int n){
    int m=0,x=n;
    int count=0;
    for(;x>0;count++){
        x=x/10;
        
    }
   
    for(int i=0;i<count;i++){
    
        m=m*10+(n%10);
        n=n/10;

    }
    return m;
}