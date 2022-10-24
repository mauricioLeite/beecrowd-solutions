#include <stdio.h>

int main(){
	float v[100];
	int i;
	for(i=0;i<=99;i++){
		scanf("%f",&v[i]);
	}	
	for(i=0;i<=99;i++){
		if(v[i]<=10.0){
			printf("A[%d] = %.1f\n",i,v[i]);
		}
	}
	return 0;
}