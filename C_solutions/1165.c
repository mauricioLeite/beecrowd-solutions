#include <stdio.h>

int main(){
	int n,x,i,p;
	scanf("%d",&n);
	while(n--){
		p=0;
		scanf("%d",&x);
		for(i=2;i<x;i++)
		{
			if(x%i==0)	p++;
		}
		if(p==0)printf("%d eh primo\n",x );
		else printf("%d nao eh primo\n",x );
	}
	return 0;
}