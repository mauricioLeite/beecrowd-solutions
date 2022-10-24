#include <stdio.h>
#include <string.h>

int main(){
	char nome[20];
	int n,f;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%d",&nome,&f);
		if(strcmp(nome,"Thor")==0){
			printf("Y\n");
		}else{
			printf("N\n");
		}
		
	}
	return 0;
}