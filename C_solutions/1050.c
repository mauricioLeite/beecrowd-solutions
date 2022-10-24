#include <stdio.h>

int main(){
	int n1;
	scanf("%d",&n1);
	if(n1==61)printf("Brasilia\n");
	else if(n1==71)printf("Salvador\n");
	else if(n1==11)printf("Sao Paulo\n");
	else if(n1==21)printf("Rio de Janeiro\n");
	else if(n1==32)printf("Juiz de Fora\n");
	else if(n1==19)printf("Campinas\n");
	else if(n1==27)printf("Vitoria\n");
	else if(n1==31)printf("Belo Horizonte\n");
	else printf("DDD nao cadastrado\n");
	return 0;
}