#include <stdio.h>

int main(){
	int x=1,i,a,soma=0;
	while(x!=0)
	{
		soma=0;
		scanf("%d",&x);
		if(x==0)break;
		a=x+10;
		for(i=x;i<a;i++)
		{
			if((i%2)==0)
			{
				soma+=i;
			}
		}
		printf("%d\n",soma);
	}	
	return 0;
}