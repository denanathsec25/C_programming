#include<stdio.h>
int main(){
    int arr[1000],hash[100000]={0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]]!=0)
        {
            printf("The element %d repeated for %d times\n",arr[i],hash[arr[i]]);
            hash[arr[i]]=0;
        }
    }
}