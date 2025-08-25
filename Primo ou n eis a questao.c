#include <stdio.h>

int main() {
    int N;
    int i;
    int primo = 1;
    
    scanf("%d", &N);
    if(N <= 1) {
        primo = 0;
    } 
    else {
        for(i = 2; i * i <= N; i++) {
            if(N % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if(primo) {
        printf("Sim, primo\n");
    } else {
        printf("Nao, nao e primo\n");
    }

    return 0;
}
