#include <stdio.h>

int main(){
	int i,n1,n2,maior=0;
	scanf("%d%d",&n1,&n2);
	if(n1>maior) maior =n1;
	if(n2>maior) maior =n2;
	printf("%d\n",maior);	
	return 0;
}