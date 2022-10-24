#include <stdio.h>

int main(){
	int n,sum;
	while(scanf("%d",&n) && n!=0)
	{
		sum=((n+1)*n*(2*n+1))/6;
		printf("%d\n",sum);
	}
	
	return 0;
}