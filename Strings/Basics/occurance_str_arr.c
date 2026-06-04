#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char word[n][50];

    for(int i = 0; i < n; i++) {
        scanf("%49s", word[i]);
    }

    int count[n];

    for(int i = 0; i < n; i++) {
        count[i] = 0;

        for(int j = 0; j < n; j++) {
            if(strcmp(word[i], word[j]) == 0) {
                count[i]++;
            }
        }
    }

    for(int i = 0; i < n; i++) {

        int printed = 0;

        for(int j = 0; j < i; j++) {
            if(strcmp(word[i], word[j]) == 0) {
                printed = 1;
                break;
            }
        }

        if(!printed) {
            printf("%s ---> %d\n", word[i], count[i]);
        }
    }

    return 0;
}