#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("=== Calculadora Simples em C ===\n");
    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro: Nao e possivel dividir por zero.\n");
            }
            break;

        default:
            printf("Erro: Operador invalido.\n");
            break;
    }

    return 0;
}






}
