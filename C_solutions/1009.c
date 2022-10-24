#include <stdio.h>
 
int main() {
 char nome[30];
    double salario,vendas;
    gets(nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);
    salario = salario + (0.15*vendas);
    printf("TOTAL = R$ %.2lf\n",salario);
    return 0;
}