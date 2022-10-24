#include <stdio.h>

int main(){
	int n,c;
	double a;
	scanf("%d",&n);
	while(n--)
	{
		c=0;
		scanf("%lf",&a);
		do
		{
			a /=2.0;
			c++;
		}while(a>1.0);
		printf("%d dias\n",c);
	}
	return 0;
}