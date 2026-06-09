#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[50];
    char str[50];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        str[i]=arr[i]+'0';
    }

    str[n]='\0';
    printf("%s",str);
}