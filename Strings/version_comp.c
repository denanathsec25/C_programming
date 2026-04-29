#include<stdio.h>
#include<String.h>
int main(){
    char v1[20];
    char v2[20];

    int a1,b1,c1;
    int a2,b2,c2;
    
    fgets(v1,sizeof(v1),stdin);
    fgets(v2,sizeof(v2),stdin);
    v1[strcspn(v1, "\r\n")] = '\0';
    v2[strcspn(v2, "\r\n")] = '\0';


    sscanf(v1,"%d.%d.%d",&a1,&b1,&c1);
    sscanf(v2,"%d.%d.%d",&a2,&b2,&c2);

    if(a1>a2){
        printf("%s is greater.",v1);
    }
    else if(a2>a1){
        printf("%s is greater.",v2);
    }
    else{
        if(b1>b2){
            printf("%s is greater.",v1);
        }
        else if(b2>b1){
            printf("%s is greater.",v2);
        }
        else{
            if(c1>c2){
            printf("%s is greater.",v1);
        }
            else if(c2>c1){
                printf("%s is greater.",v2);
            }
            else{
                printf("Both the version are equal");
            }
        }
    }
}