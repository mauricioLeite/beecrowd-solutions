#include <stdio.h>

int main(){
	double vol,d,r,h,area,pi = 3.14;
	while(scanf("%lf%lf",&vol,&d)!=EOF){
		r = d/2;
		area = pi*r*r;
		h = vol/area;
		printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,area);		
	}	
	return 0;
}