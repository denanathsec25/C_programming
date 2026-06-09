#include<stdio.h>

void intcon(int src1[], int size1, int src2[], int size2, int dst[]);

int main(){
    int size1,size2;
    scanf("%d %d",&size1,&size2);
    int src1[size1];
    int src2[size2];
    
    for(int i=0;i<size1;i++){
        scanf("%d",&src1[i]);
    }

    for(int i=0;i<size2;i++){
        scanf("%d",&src2[i]);
    }

    int dst[size1+size2];

    intcon(src1,size1,src2,size2,dst);

    for(int i=0;i<size1+size2;i++){
        printf("%d ",dst[i]);
    }
}

void intcon(int src1[], int size1, int src2[], int size2, int dst[]){
    for(int i=0;i<size1;i++){
        dst[i]=src1[i];
    }

    for(int i=0;i<size2;i++){
        dst[size1+i]=src2[i];
    }
}