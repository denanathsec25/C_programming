#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    char t[10];
    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);
    s[strcspn(s,"\n")]='\0';
    t[strcspn(t,"\n")]='\0';

    if(strlen(s)!=strlen(t)){
        printf("Non Isomorphic");
        return 0;
    }

    char map_st[256]={0};
    char map_ts[256]={0};

    for(int i=0;i<strlen(s);i++){

        char cs = s[i];
        char ct = t[i];

        if(map_st[(int)cs] == 0 && map_ts[(int)ct]==0){

            map_st[(int)cs]=ct;
            map_ts[(int)ct]=cs;

        }

        else if(map_st[(int)cs] != ct || map_ts[(int)ct] != cs){

            printf("Not Isomorphic");
            return 0;
        }

    }
    printf("Isomorphic");
    return 0;
}