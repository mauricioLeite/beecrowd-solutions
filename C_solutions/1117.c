#include <stdio.h>
 
int main() {
 
    float nota1=-1,nota2=-1,media;
	while(nota1 == -1){
		scanf("%f",&nota1);
		if(nota1<0 || nota1>10){
			printf("nota invalida\n");			
			nota1=-1;
		}
	}
	while(nota2 == -1){
		scanf("%f",&nota2);
		if(nota2<0 || nota2>10){
			printf("nota invalida\n");			
			nota2=-1;
		}
	}
	media = (nota1+nota2)/2;
	printf("media = %.2f\n",media);
 
    return 0;
}