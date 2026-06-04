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
        int duplicate=0;
        for(int j=0;j<i;j++){
            if(strcmp(word[i],word[j])==0){
                duplicate =1;
                break;
            }
        }
        if(!duplicate){
            printf("%s\n",word[i]);
        }
    }
    
}