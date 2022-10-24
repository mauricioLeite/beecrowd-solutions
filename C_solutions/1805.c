#include <stdio.h>

int main(){
	long long int N1,N2,i,soma=0;
	scanf("%lld %lld",&N1,&N2);
	soma = (N1+N2)*(N2-N1+1)/2;
	printf("%lld\n",soma);
	return 0;
}