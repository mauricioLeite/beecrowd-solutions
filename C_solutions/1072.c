#include <stdio.h>

int main(){
	int n,m,in=0,out=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		if(m>=10 && m<=20) in++;
		else out++;
	}
	printf("%d in\n%d out\n",in,out);
	return 0;
}