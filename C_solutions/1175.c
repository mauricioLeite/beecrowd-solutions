#include <stdio.h>

int main(){
	int v[20],i,b=19;
	for(i=0;i<20;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++){
		v[i]+=v[b];
		v[b]=v[i]-v[b];
		v[i]=v[i]-v[b];
		b--;
	}
	for(i=0;i<20;i++){
		printf("N[%d] = %d\n",i,v[i]);
	}
	return 0;
}