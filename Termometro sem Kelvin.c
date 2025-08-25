#include <stdio.h>

int main() {
    char escala;
    double temp;
    double resultado;

    printf("Digite a escala que esta fornecendo! C para Celsius ou F para Fahrenheit: ");
    scanf(" %c", &escala);

    printf("Agora, por favor, digite a temperatura: ");
    scanf("%lf", &temp);

    if(escala == 'C' || escala == 'c') {
    resultado = (temp * 9 / 5) + 32;
    printf("%.2lf graus Fahrenheit \n", resultado);
    } 
    
    else if(escala == 'F' || escala == 'f') {
    resultado = (temp - 32) * 5 / 9;
    printf("%.2lf graus Celsius \n", resultado);
    }
     
    else {
        printf("Escala invalida, so funcionamos para Celsius e Farenheit\n");
    }

    return 0;
}
