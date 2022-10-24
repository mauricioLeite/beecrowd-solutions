#include <stdio.h>
#include <math.h>

int main(){
	double A;
	int l;
	while(scanf("%d",&l)!=EOF)
	{
		A=l*l*2*sqrt(3)/5;
		printf("%.2lf\n",A);
	}
	
	return 0;
}