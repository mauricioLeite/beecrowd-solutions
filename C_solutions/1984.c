#include <stdio.h>

int main(){
	long long int numero,n1;
	scanf("%lld",&numero);
	while(numero>0){
		n1 = numero%10;
		numero = numero/10;
		if(numero == 0){
			printf("%lld\n",n1);
		}else{
			printf("%lld",n1);
		}	
	}
	return 0;
}