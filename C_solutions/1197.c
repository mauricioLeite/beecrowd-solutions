#include <stdio.h>

int main(){
	int v,t,resultado;
	while(scanf("%d%d",&v,&t)!=EOF)
	{
			resultado = v*2*t;
			printf("%d\n",resultado);
	}	
	return 0;
}