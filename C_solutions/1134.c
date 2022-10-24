#include <stdio.h>

int main(){
	int a=0,alcool=0,gasolina=0,diesel=0;
	while(a!=4){
		scanf("%d",&a);
		if(a==1) alcool++;
		else if (a==2) gasolina++;
		else if (a==3) diesel++;
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);
	return 0;
}