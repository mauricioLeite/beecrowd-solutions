#include <stdio.h>

int main(){
	int a,b,c,d,N;
	scanf("%d",&N);
	a=N/3600;
	b=N%3600;
	c=b/60;
	d=b%60;
	printf("%d:%d:%d\n",a,c,d);

	return 0;
}