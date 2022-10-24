#include <stdio.h>

int main(){
	int n,i,v,soma;
	scanf("%d",&n);
	while(n--)
	{
		soma=0;
		scanf("%d",&v);
		for(i=1;i<v;i++)
		{
			if(v%i==0)
				soma+=i;
		}
		if(v == soma)
			printf("%d eh perfeito\n",v);
		else 
			printf("%d nao eh perfeito\n",v);
	}
	return 0;
}