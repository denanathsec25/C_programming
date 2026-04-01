#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[10000]={0};
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]!=0){
            int count=1;
            for(int j=2;j<=sqrt(arr[i]);j++){
                if(arr[i]%j==0){
                    count =0;
                    break;
                }
            }
            if(count == 0 || arr[i]==1 ){
                printf("%d repeated %d times\n",arr[i],hash[arr[i]]);
            }
            hash[arr[i]]=0;
        }
    }
}