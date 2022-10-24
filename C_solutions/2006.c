#include <stdio.h>

int main(){
	int sum=0,xa,i,a;
	scanf("%d",&xa);
	for(i=0;i<5;i++){
		scanf("%d",&a);
		if(a==xa)sum++;
	}
	printf("%d\n",sum);	
	return 0;
}