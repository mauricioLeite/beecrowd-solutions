#include <stdio.h>
 
int main() {
    int cod1,cod2,uni1,uni2;
    float valor1,valor2,total;
    scanf("%d %d %f",&cod1,&uni1,&valor1);
    scanf("%d %d %f",&cod2,&uni2,&valor2);
    total = (uni1*valor1)+(uni2*valor2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}