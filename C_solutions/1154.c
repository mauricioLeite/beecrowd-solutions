#include <stdio.h>

int main(){
	int n=0,c=0;
	float s=0,media;
	while(n>=0){
		scanf("%d",&n);
		if(n>=0){
			s+=n;
			c++;
		}
	}
	media = s/c;
	printf("%.2f\n",media);	
	return 0;
}