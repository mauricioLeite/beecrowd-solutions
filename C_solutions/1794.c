#include <stdio.h>

int main(){
	int n,la,lb,sa,sb;
	scanf("%d%d%d%d%d",&n,&la,&lb,&sa,&sb);
	if((n>=la) && (n>=sa) && (n<=lb) && (n<=sb)) printf("possivel\n");
	else printf("impossivel\n");	

	return 0;
}