#include <stdio.h>

int main(){
	int n,i;
	while(1)
	{
		int a = 0,b = 1,fib = 1;
		scanf("%d",&n);
		if (n==0) break;
		for(i=0;i<n;i++)
		{
			fib = a + b;
			a = b;
			b = fib;
		}
		printf("%d\n",fib);
	}

	return 0;
}