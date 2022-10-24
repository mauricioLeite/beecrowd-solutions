#include <stdio.h>

int main(){
	int percentual;
	double sal_n,reajuste,salario_f;
	char ch='%';

	scanf("%lf",&sal_n);
	if(sal_n<=400)	percentual=15;
	else if(sal_n>400 && sal_n<=800)	percentual=12;
	else if(sal_n>800 && sal_n<=1200)	percentual=10;
	else if(sal_n>1200 && sal_n<=2000)	percentual=7;
	else	percentual=4;

	reajuste = sal_n*percentual/100;
	salario_f = sal_n + reajuste;

	printf("Novo salario: %.2lf\n",salario_f);
	printf("Reajuste ganho: %.2lf\n",reajuste);
	printf("Em percentual: %d %c\n",percentual,ch);
	
	return 0;
}