#include <stdio.h>

int main(){
    int r;
    double v,pi=3.14159;
    scanf("%d",&r);
    v = (4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",v);
    return 0;
}