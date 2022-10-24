#include <stdio.h>

int main(){
	double a,b,valor;
	int c;
	scanf("%d",&c);
	while(c--){
		scanf("%lf%lf",&a,&b);
		if(b==0) printf("divisao impossivel\n");
		else {
			valor = a/b;
			printf("%.1lf\n",valor );
		}
	}
	return 0;
}
