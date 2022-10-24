#include <stdio.h>
 
int main() {
 int i,p;
	float n;
	for(i=0;i<6;i++){
		scanf("%f",&n);
		if(n>0) p++;
	}
	printf("%d valores positivos\n",p);
    return 0;
}