#include <stdio.h>
#include <math.h>

float distancia (float x1, float x2, float y1, float y2){
    float valor;
    valor = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return valor;
}


int main (){
    float x1,x2,y1,y2,dist;
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    dist = distancia(x1,x2,y1,y2);
    printf("%.4f\n",dist);
    return 0;
}
