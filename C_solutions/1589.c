#include <stdio.h>

int main(){
	int n,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		c = a+b;
		printf("%d\n",c);
	}
	return 0;
}