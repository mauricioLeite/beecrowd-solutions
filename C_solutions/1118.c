#include <stdio.h>

int main(){
	int op=1;
	while(op == 1){
		float n1=11,n2=11,media;
		do{
			scanf("%f",&n1);
			if(n1<0 || n1 > 10)printf("nota invalida\n");
		}while(n1<0 || n1 > 10);
		do{
			scanf("%f",&n2);
			if(n2<0 || n2 > 10)printf("nota invalida\n");
		}while(n2<0 || n2 > 10);
		media = (n1+n2)/2;
		printf("media = %.2f\n",media);
		do{
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&op);
		}while( op<1 || op>2 	);
	}
	return 0;
}