#include <stdio.h>

int main(){
	int n,j=0,i,v[1000];
	scanf("%d",&n);
	for(i=0;i<1000;i++)
	{
		v[i]=j;
		printf("N[%d] = %d\n",i,v[i]);
		j++;
		if(j==n){
			j=0;
		}
	}
	return 0;
}