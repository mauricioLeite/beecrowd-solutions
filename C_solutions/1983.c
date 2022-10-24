#include <stdio.h>

int main(){
	int c,matricula,escolhido=0;
	double nota,maior;
	scanf("%d",&c);
	while(c--)
	{
		scanf("%d%lf",&matricula,&nota);
		if(nota >= 8)
		{
			if(nota > maior)
			{
				escolhido = matricula;
				maior = nota;
			}
		}
	}
	if(escolhido!=0){
			printf("%d\n",escolhido);
		}else{
			printf("Minimum note not reached\n");
		}
	
	return 0;
}