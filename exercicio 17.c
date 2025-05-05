#include <stdio.h>

int main() {
    int num, i, primo = 1;
    printf("um numero: ");
    scanf("%d", &num);

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            primo = 0;
            break;
        }
    }

    if(primo)
        printf("%d e primo.\n", num);
    else
        printf("%d nao e primo.\n", num);
    
    return 0;
}
