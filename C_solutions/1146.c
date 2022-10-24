#include <stdio.h>

int main(){
	int i,n=1;
	while(n!=0){
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(i!=n){
				printf("%d ",i );
			}else{
			printf("%d\n",i);
			}
		}
	}
	return 0;
}