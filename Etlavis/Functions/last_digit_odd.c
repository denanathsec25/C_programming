#include<stdio.h>
#include<math.h>

int check_last_digit_odd(int);

int main(){
    int num;
    scanf("%d",&num);
    check_last_digit_odd(num);
    return 0;
}

int check_last_digit_odd(int n){
    int x = n, count = 0, m;

    for(; x > 0; count++){
        x = x / 10;
    }

    int y = n;
    for(int i = 0; i < count; i++){
        m = y % 10;
        y = y / 10;
    }

    int power = 1;
    for(int i = 1; i < count; i++){
        power = power * 10;
    }

    if(m % 2 == 1){
        m = m - 1;
    }

    printf("%d", m * power + (n % power));

    return 0;
}