#include <stdio.h>

int main() {
    int N;
    int i;
    long long fatorial = 1;

    scanf("%d", &N);
    if(N < 0) {
        printf("N nao esta nos parametros, ajeite o valor\n");
    }

    else {
        for(i = 1; i <= N; i++) {
            fatorial *= i;
        }
        printf("%I64d\n", fatorial);
    }
    return 0;
}

// Edit 1: Não funciona? Usei long long pq o fatorial acaba sendo um número absurdo, erro em algo por falta de costume?
// Edit 2: Agora ta funcionando sou burra e esqueçi de colocar .c no final do nome desse, refiz 2 vezes por ser cega msm
