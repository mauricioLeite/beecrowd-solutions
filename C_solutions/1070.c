#include <stdio.h>

int main(){
	int i,n;
	scanf("%d",&i);
	n=i+12;	
	for(i;i<n;i++){
		if(i%2 != 0){
			printf("%d\n",i);		
		}
	}
	return 0;
}