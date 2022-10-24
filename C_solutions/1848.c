#include <stdio.h>

int main(){
	char corvo[10];
	int i,caw=0,soma=0;
	for(i=0;i<3;i++)
	{
		soma = 0;
		while(1)
		{
			gets(corvo);
			if(corvo[0]=='c')break;
			else{
				if(corvo[0]=='*')soma+=4;
				if(corvo[1]=='*')soma+=2;
				if(corvo[2]=='*')soma+=1;
			}
		}
		printf("%d\n",soma);
	}
	return 0;
}