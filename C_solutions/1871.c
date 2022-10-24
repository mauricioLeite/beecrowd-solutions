#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a, b, i, soma, aux;
	char c[10];
	scanf("%d%d",&a,&b);
	while(a!=0 && b!=0)
	{
		i = 9;
		soma = a + b;
		while(i>=0)
		{
			if(soma == 0) c[i] == 0;
			aux = soma % 10;
			c[i] = aux + 48;
			soma /= 10;
			i--;
		}
		for(i=0;i<strlen(c);i++)
		{
			if(c[i] != '0') printf("%c",c[i] );
		}
		printf("\n");
		scanf("%d%d",&a,&b);
	}
	return 0;
}
