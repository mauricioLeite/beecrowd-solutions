#include <stdio.h>

int main(){
	int ini,dur,fuso,r;
	scanf("%d%d%d",&ini,&dur,&fuso);
	r = ini + dur + fuso;
	if(r > 24) r -= 24;
	else if(r < 0) r += 24;
	printf("%d\n",r);
	return 0;
}