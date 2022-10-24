#include <stdio.h>

int main(){
	int c,na;
	char acao[10];
	scanf("%d%d",&na,&c);
	while(c--)
	{
		scanf("%s",acao);
		if(acao[0] == 'f')
		{
			na+=1;	
		}else if(acao[0] == 'c')
		{
			na-=1;
		}
	}
	printf("%d\n",na);	
	return 0;
}