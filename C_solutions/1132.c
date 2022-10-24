#include <stdio.h>

int main(){
	int a,b,soma=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		a+=b;
		b=a-b;
		a=a-b;
	}
	for(a;a<=b;a++){
		if(a%13!=0)soma+=a;

	}
	printf("%d\n",soma);
	return 0;
}