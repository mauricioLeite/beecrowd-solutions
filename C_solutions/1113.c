#include <stdio.h>

int main(){
	int n1=0,n2=1;
	while(n1!=n2){
		scanf("%d%d",&n1,&n2);
		if(n1<n2) printf("Crescente\n");
		if(n1>n2) printf("Decrescente\n");
	}
	return 0;
}