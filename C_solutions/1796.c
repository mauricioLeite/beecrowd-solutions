#include <stdio.h>

int main(){
	int c,a,s=0,n=0;
	scanf("%d",&c);
	while(c--){
		scanf("%d",&a);
		if(a==1)n++;
		else s++;
	}
	if(n<s)printf("Y\n");
	else printf("N\n");
	return 0;
}