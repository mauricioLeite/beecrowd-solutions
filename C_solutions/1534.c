#include <stdio.h>

int main(){
	int n,i,j,a;	
	while(scanf("%d",&n)!=EOF)
	{
		int v[n][n];
		a=n-1;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j==a)
				{
					v[i][j]=2;
					a--;
				}else if(i==j)
				{
					v[i][j]=1;
				}else
				{
					v[i][j]=3;			
				}
			}
		}	
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d",v[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}