#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i <= num/2; i++)
        if (num % i == 0) sum += i;
    return sum == num;
}

int main() {
    for (int i = 2; i <= 10000; i++)
        if (isPerfect(i)) printf("%d é um número perfeito.\n", i);
    return 0;
}
