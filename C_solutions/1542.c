#include <stdio.h>

int main(){
	int a,b,c,n;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)break;
		scanf("%d",&b);
		if(b==0)break;
		scanf("%d",&c);
		if(c==0)break;
		n = (a*b*c)/(c-a);
		if(n==1)
			printf("1 pagina\n");
		else
			printf("%d paginas\n",n );
	}
	return 0;
}	