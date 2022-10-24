#include <stdio.h>

void jogo(char j1,char j2)
{
	if(j1=='e' && j2=='e') printf("Sem ganhador\n");
    else if(j1=='t' && j2=='t') printf("Aniquilacao mutua\n");
    else if(j1=='a' && j2=='a') printf("Ambos venceram\n");
    else if(j1=='t' || (j1=='e' && j2=='a'))printf("Jogador 1 venceu\n");
    else printf("Jogador 2 venceu\n");
}

int main(){
	int c;
	char j1[10],j2[10];
	scanf("%d",&c);
	while(c--)
	{
		scanf("%s%s",j1,j2);
		jogo(j1[1],j2[1]);
	}	
	return 0;
}