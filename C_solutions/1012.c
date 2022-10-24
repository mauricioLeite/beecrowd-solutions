#include <stdio.h>

int main(){
    double A,B,C,D,E,F,G,H;
    scanf("%lf%lf%lf",&A,&B,&C);
    D = (A*C)/2;
    E = 3.14159*C*C;
    F = (A+B)*C/2;
    G = B*B;
    H = A*B;
    printf("TRIANGULO: %.3lf\n",D);
    printf("CIRCULO: %.3lf\n",E);
    printf("TRAPEZIO: %.3lf\n",F);
    printf("QUADRADO: %.3lf\n",G);
    printf("RETANGULO: %.3lf\n",H);
    return 0;
}