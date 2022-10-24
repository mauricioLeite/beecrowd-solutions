#include <stdio.h>

int main(){
	double a,b,c,aumento;
	scanf("%lf%lf",&a,&b);
	c = b-a;
	aumento = c*100/a;
	printf("%.2lf%%\n",aumento);	
	return 0;
}