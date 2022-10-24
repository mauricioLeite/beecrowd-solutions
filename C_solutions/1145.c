#include <stdio.h>

int main(){
	int X,Y,b=0,i;
	scanf("%d%d",&X,&Y);
	for(i=1;i<=Y;i++)
	{
		b++;
		if(b==X)
		{
			printf("%d\n",i);
			b=0;
		}
		else printf("%d ",i);	
	}	
	return 0;
}