#include <stdio.h>

int main(){
	long long int n1,n2,soma;
	while(scanf("%lld%lld",&n1,&n2)!=EOF)
	{
		soma = n1^n2;
		printf("%lld\n",soma);	
	}	
	return 0;
} 