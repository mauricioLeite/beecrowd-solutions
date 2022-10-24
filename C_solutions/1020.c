#include <stdio.h>

int main(){
	int ano,mes,dia,x,N;
	scanf("%d",&N);
	ano = N/365;
	x = N%365;
	mes = x/30;
	dia = x%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
	return 0;
}