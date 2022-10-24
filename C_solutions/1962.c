#include <stdio.h>

int main(){
	int c,n,ano;
	scanf("%d",&c);
	while(c--)
	{
		scanf("%d",&n);
		if(n<2015)
		{
			ano = 2015 - n;	
			printf("%d D.C.\n",ano);
		}else{
			ano = n -2014;
			printf("%d A.C.\n",ano);
		}
	}
	return 0;
}