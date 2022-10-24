#include <stdio.h>

int main(){
	double V[12][12],soma=0.0;
	int i,j,n=11;
	char o;
	scanf("%c",&o);
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%lf",&V[i][j]);
			if(j<i && j<n)
			{
				soma+=V[i][j];
			}
		}
		n--;
	}
	if(o=='S')
	{
		printf("%.1lf\n",soma);
	}else if(o=='M')
	{
		soma=soma/30;
		printf("%.1lf\n",soma);
	}

	return 0;
}