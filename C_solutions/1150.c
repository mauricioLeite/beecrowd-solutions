#include <stdio.h>

int main(){
	int x,z,soma,n=0,i;
	scanf("%d%d",&x,&z);
	while(z<=x){
		scanf("%d",&z);
	}
	for(i=x,soma=0;soma<z;i++){
		soma+=i;
		n++;
	}
	printf("%d\n",n);
	return 0;
}