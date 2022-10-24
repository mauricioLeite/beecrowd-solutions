#include <stdio.h>
#include <string.h>

int main(){
	long long int n,i=0,mod,j,lngt;
	char hexa[10];
	scanf("%lld",&n);
	while(n>0)
	{
		mod = n%16;
		n /= 16;
		if(mod<=9) hexa[i] = mod+48;
		else if(mod == 10) hexa[i] = 'A';
		else if(mod == 11) hexa[i] = 'B';
		else if(mod == 12) hexa[i] = 'C';
		else if(mod == 13) hexa[i] = 'D';
		else if(mod == 14) hexa[i] = 'E';
		else if(mod == 15) hexa[i] = 'F';
		i++;
	}
	hexa[i] = '\0';
	lngt = strlen(hexa);
	for(j=lngt-1;j>=0;j--)
		printf("%c",hexa[j]);
	printf("\n");
	
	return 0;
}