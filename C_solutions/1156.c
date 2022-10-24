#include <stdio.h>

int main(){
	float s=1,i,x=2;
	for(i=3;i<=39;i+=2){
		s+=(i/x);
		x*=2;
	}
	printf("%.2f\n",s);
	return 0;
}