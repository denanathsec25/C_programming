#include<stdio.h>
int main(){
    int r,c;
    int matrix[10][10];
    int issymmentric=1;

    scanf("%d %d",&r,&c);
    if(r!=c){
        printf("The give matric is not symmentric");
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            if(matrix[i][j]!=matrix[j][i]){
                issymmentric =0;
                break;
            }
        }
        
    }
    if(issymmentric == 1){
        printf("The given matrix is symmentric");
    }
    else{
        printf("The given matrix is not symmentric");
    }
    return 0;
}