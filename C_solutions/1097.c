#include <stdio.h>

int main(){
	int i,j=7,n=5;
	for(i=1;i<10;i+=2){
		for(j;j>=n;j--){
			printf("I=%d J=%d\n",i,j);
		}		
		n=j+3;
		j+=5;
	}
	return 0;
}