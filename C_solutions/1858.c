#include <stdio.h>

int main(){
	int n,i,menor,t=1;
	scanf("%d",&n);
	int v[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&v[i]);
		if(i==1)
		{
			menor = v[i];
		}
		if(v[i]<menor)
		{
			menor = v[i];
			t = i;
		}
	}
	printf("%d\n",t);
	return 0;
}