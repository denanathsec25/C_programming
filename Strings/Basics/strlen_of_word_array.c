#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char word[n][50];

    for(int i=0;i<n;i++){
        scanf("%49s",&word[i]);
    }

    for(int i=0;i<n;i++){
        if(i%2==1){
            printf("%s\n",strrev(word[i]));
        }
    }
}