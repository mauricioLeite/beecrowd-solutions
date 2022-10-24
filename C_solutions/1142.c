#include <stdio.h>

int main(){
	int i,j,l,n=1;
	scanf("%d",&l);
	for(i=0;i<l;i++){
		for(j=0;j<3;j++){
			printf("%d ",n);
			n++;
		}
		printf("PUM\n");
		n++;
	}	
	return 0;
}