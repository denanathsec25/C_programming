#include <stdio.h>

void memcomp(int *, int *, int);

int main() {
    int n;
    scanf("%d", &n);

    int src[n], dst[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &src[i]);
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &dst[i]);
    }

    memcomp(src, dst, n);

    return 0;
}
void memcomp(int src[], int dst[], int n){
    int num=1;
    for(int i=0;i<n;i++){
        if (dst[i]!=src[i]){
            printf("Failure");
            num=0;
            break;
        }
    }
    if(num==1){
        printf("Success");
    }
}