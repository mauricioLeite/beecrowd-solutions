#include <stdio.h>

int main(){
	int n,i,v[10];
	scanf("%d",&n);
	for(i=0;i<10;i++){
		v[i]=n;
		printf("N[%d] = %d\n",i,v[i]);
		n*=2;
	}
	return 0;
}