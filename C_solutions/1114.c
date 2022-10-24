#include <stdio.h>

int main(){
	int senha=0;
	while(senha!=2002){
		scanf("%d",&senha);
		if(senha!=2002)printf("Senha Invalida\n");
	}
	printf("Acesso Permitido\n");
	return 0;
}