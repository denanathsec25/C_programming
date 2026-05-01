#include<stdio.h>
int pali(int);
int main(){
    int num;
    scanf("%d",&num);
    pali(num);
    return 0;
}
int pali(int m){
    int x=m;
    int rev=0;
    for(;x>0;x=x/10){
        
        rev = rev * 10 + (x % 10);
    }
     if(m == rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
}

