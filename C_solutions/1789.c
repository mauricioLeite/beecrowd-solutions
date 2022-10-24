#include <stdio.h>

int main(){
	int n,i,maior;
	while(scanf("%d",&i)!=EOF){
		maior = 0;
		while(i--){
			scanf("%d",&n);
			if(n>maior) maior = n;
		}
		if(maior<10) printf("1\n");
		else if(maior<20) printf("2\n");
		else printf("3\n");
	}
	
	return 0;
}