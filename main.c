#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, soma, subt, mult, div;

    printf("Digite um número aqui: ");
    scanf("%f", &num1);
    fflush(stdin);

    printf("Digite outro número aqui: ");
    scanf("%f", &num2);
    fflush(stdin);

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;

    if (num1 != 0)
    {
        div = num1 / num2;
    }
    else
    {
        printf("Erro: divisão por zero!\n");
        return 1; 
    }

    printf("\nA soma dos dois números é %.2f\n", soma);
    printf("A subtração dos dois números é %.2f\n", subt);
    printf("A multiplicação dos dois números é %.2f\n", mult);
    printf("A divisão dos dois números é %.2f", div);

    return 0;
}