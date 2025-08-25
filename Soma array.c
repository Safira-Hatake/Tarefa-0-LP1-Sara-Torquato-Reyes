#include <stdio.h>

int main() {
    int N[5];
    int i, soma = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &N[i]);
        soma += N[i];
    }

    printf("%d\n", soma);
    return 0;
}
