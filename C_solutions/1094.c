#include <stdio.h>

int main(){
	int c,n,coelho=0,rato=0,sapo=0,total=1;
	double perc_c,perc_r,perc_s;
	char animal[2];
	scanf("%d",&c);

	while(c--){
	scanf("%d %s",&n,animal);
	if(strcmp(animal,"C")==0)coelho+=n;
	if(strcmp(animal,"R")==0)rato+=n;
	if(strcmp(animal,"S")==0)sapo+=n;
	}

	total = coelho+rato+sapo;
	perc_c = coelho*100.0/total;
	perc_r = rato*100.0/total;
	perc_s = sapo*100.0/total;
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",coelho);
	printf("Total de ratos: %d\n",rato);
	printf("Total de sapos: %d\n",sapo);
	printf("Percentual de coelhos: %.2lf %%\n",perc_c);
	printf("Percentual de ratos: %.2lf %%\n",perc_r);
	printf("Percentual de sapos: %.2lf %%\n",perc_s);
	return 0;
}