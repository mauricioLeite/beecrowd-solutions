#include <stdio.h>

int main(){
	double a,b,d;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		d = a - (int)a;
		if(d > b)
			printf("%d\n",(int)a+1);
		else
			printf("%d\n",(int)a);
	}	
	return 0;
}