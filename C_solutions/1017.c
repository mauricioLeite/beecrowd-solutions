#include <stdio.h>

int main(){
	int t,v;	
	double l;
	scanf("%d %d",&t,&v);
	l = (t*v)/12.00;
	printf("%.3lf\n",l);
	return 0;
}