#include <stdio.h>

int main(){
	int n,quantidade,i;
	double b,B,total;
	while(scanf("%d",&n) && n != 0)
	{
		i = 1;
		while(n--)
		{
			scanf("%d%lf%lf",&quantidade,&b,&B);
			total = (b+B)*5.0/2;
			printf("Size #%d:\nIce Cream Used: %.2lf cm2\n",i,total*quantidade );
			i++;
		}
		printf("\n");
	}	
	return 0;
}