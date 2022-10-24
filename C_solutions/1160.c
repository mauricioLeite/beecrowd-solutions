#include <stdio.h>

int main(){
	int n,pa,pb,a,b,ano=0;
	float g1,g2;
	scanf("%d",&n);
	while(n--){
		ano = 0;
		scanf("%d %d %f %f",&pa,&pb,&g1,&g2);
		while(pa<=pb){
			a = g1*pa/100;
			pa+=a;
			b = g2*pb/100;
			pb+=b;
			ano++;
			if(ano>100)break;
		}
		if(ano>100)printf("Mais de 1 seculo.\n");
		else printf("%d anos.\n",ano);
	}
	return 0;
}