#include <stdio.h>

int main(){
	int A,soma=0,n;
	scanf("%d%d",&A,&n);
	while(n<1){
		scanf("%d",&n);
	}
	while(n--){
		soma+=A;
		A++;		
	}
	printf("%d\n",soma);
	return 0;
}