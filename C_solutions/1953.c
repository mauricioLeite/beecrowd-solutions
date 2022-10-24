#include <stdio.h>

int main(){
	int n,m,EPR=0,EHD=0,Intru=0;
	char sigla[30];
	while(scanf("%d",&n)==1)
	{
		EPR=EHD=Intru=0;
		while(n--)
		{
			scanf("%d%s",&m, sigla);
			if(strcmp(sigla,"EPR")==0)
			{
				EPR++;
			}
			else if(strcmp(sigla,"EHD")==0)
			{	
				EHD++;
			}
			else
			{
				Intru++;
			}
		}
		printf("EPR: %d\n",EPR);
		printf("EHD: %d\n",EHD);
		printf("INTRUSOS: %d\n",Intru);
	}
	return 0;
}