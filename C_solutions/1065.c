#include <stdio.h>

int main(){
	int i,p,n;
	for(i=0;i<5;i++){
		scanf("%d",&n);
		if((n%2)==0){
			p++;
		}
	}
	printf("%d valores pares\n",p);
	return 0;
}