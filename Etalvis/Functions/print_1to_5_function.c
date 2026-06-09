#include <stdio.h>

void arrange_ascend();

int main() {
    arrange_ascend();
    return 0;
}

void arrange_ascend() {
    for(int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
}