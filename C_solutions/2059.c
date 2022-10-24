#include <stdio.h>

int main(){
	int p,j1,j2,r,a,soma;
	scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);
	if(r==1 && a==0)
	{
		printf("Jogador 1 ganha!\n");
	}else if(r==1 && a==1)
	{
		printf("Jogador 2 ganha!\n");
	}else if(r==0 && a==1)
	{
		printf("Jogador 1 ganha!\n");
	}else
	{
		soma = j1 + j2;
		if(soma%2==0)
		{
			if(p==1){
				printf("Jogador 1 ganha!\n");
			}else
			{
				printf("Jogador 2 ganha!\n");
			}
		}else
		{
			if(p==1){
				printf("Jogador 2 ganha!\n");
			}else
			{
				printf("Jogador 1 ganha!\n");
			}
		}
	}
		

	return 0;
}