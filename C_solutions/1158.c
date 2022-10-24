#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int x,y,i,a,soma=0;
		scanf("%d%d",&x,&y);
		a=x+(2*y);
		for(i=x;i<a;i++){
			if((i%2)!=0){
				soma+=i;
			}
		}
		printf("%d\n",soma);
	}	
	return 0;
}