#include <stdio.h>

int main(){
	int i,p;
	float n,m=0;
	for(i=0;i<6;i++){
		scanf("%f",&n);
		if(n>0){
			p++;
			m+=n;
		}
	}
	printf("%d valores positivos\n",p);
	printf("%.1f\n",m/p );
	return 0;
}
