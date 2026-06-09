#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int arrlen[n];

    char word[n][50];
    for(int i=0;i<n;i++){
        scanf("%49s",&word[i]);
    }

    for(int  i=0;i<n;i++){
        arrlen[i]=strlen(word[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arrlen[i]>arrlen[j]){
                int temp =arrlen[i];
                arrlen[i]=arrlen[j];
                arrlen[j]=temp;
            }
        }
    }
    printf("%d",arrlen[n-2]);
}