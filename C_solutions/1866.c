#include <stdio.h>

int main(){
	int c,n,i,soma;
	scanf("%d",&c);
	while(c--)
	{
		soma = 0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			{
				soma+=1;
			}else if(i%2!=0)
			{
				soma+=(-1);
			}
		}
		printf("%d\n",soma);
	}
	return 0;
}