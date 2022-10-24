#include <stdio.h>

int main(){
	 double n,soma = 0.0,c = 0,r;
	 char v[100];
	 while(scanf("%[^\n]",&v)!= EOF)
	 {
	 	scanf("%lf",&n);
	 	soma +=n;
	 	c++;
	 }
	 r = soma/(float)c;
	 printf("%.1lf\n",r);	
	return 0;
}