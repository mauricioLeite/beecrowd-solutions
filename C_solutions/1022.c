#include <stdio.h>

int mdc(int num, int den){
	int resto;
	if(den > num){
		den+=num;
		num = den - num;
		den = den - num;
	}
	if(num<0){
		num*=-1;
	}
	if(den<0){
		den*=-1;
	}
	resto = num%den;
	while(resto!=0){
		num = den;
		den = resto;
		resto = num%den;			
	}
	return den;
}

int main(){
	int cont,N1,N2,D1,D2,numerador,denominador,d;
	char c1,c2,c3;
	scanf("%d",&cont);
	while(cont--){
		scanf("%d %c %d %c %d %c %d",&N1,&c1,&D1,&c2,&N2,&c3,&D2);
		if(c2 == '+'){
			numerador = (N1*D2+N2*D1);
			denominador = (D1*D2);
		}else if(c2 == '-'){
			numerador = (N1*D2-N2*D1);
			denominador = (D1*D2);			
		}else if(c2 == '*'){
			numerador = (N1*N2);
			denominador = (D1*D2);
		}else if(c2 == '/'){
			numerador = (N1*D2);
			denominador = (N2*D1);
		}
		d = mdc(numerador,denominador);
		printf("%d/%d = %d/%d\n",numerador,denominador,numerador/d,denominador/d);		
	}	
	return 0;
}
