#include <stdio.h>
int main() {
    int first[50], second[50];
    int result[51]; 
    int i, carry = 0;

    for(i = 0; i < 50; i++) {
        scanf("%d", &first[i]);
    }

    for(i = 0; i < 50; i++) {
        scanf("%d", &second[i]);
    }

    for(i = 0; i <= 50; i++) {
        result[i] = 0;
    }

    for(i = 50 - 1; i >= 0; i--) {
        int sum = first[i] + second[i] + carry;
        result[i + 1] = sum % 10;
        carry = sum / 10;
    }

    result[0] = carry;

    for(i = 0; i <= 50; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}