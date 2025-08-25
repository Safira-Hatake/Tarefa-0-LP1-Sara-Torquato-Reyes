#include <stdio.h>

int main() {
    int N;
    int i;

    scanf("%d", &N);
    if(N <= 0) {
        printf("N nao esta nos parametros, ajeite o valor\n");
    }
    
    else {
        for(i = 1; i <= N; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
