#include<stdio.h>
void swap(int *,int *);
int main(){
    int num,num1;
    scanf("%d %d",&num,&num1);
    swap(&num,&num1);
    printf("%d %d",num,num1);
}

void swap(int *num,int *num1){
    int temp=*num;
    *num=*num1;
    *num1=temp;

}