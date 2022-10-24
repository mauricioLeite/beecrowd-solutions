#include <stdio.h>

int main(){
	int z,n,c2=0,c3=0,c4=0,c5=0;
	scanf("%d",&z);
	while(z--)
	{
		scanf("%d",&n);
		if(n%2==0)	c2++;
		if(n%3==0)	c3++;
		if(n%4==0)	c4++;
		if(n%5==0)	c5++;
	}	
	printf("%d Multiplo(s) de 2\n",c2);
	printf("%d Multiplo(s) de 3\n",c3);
	printf("%d Multiplo(s) de 4\n",c4);
	printf("%d Multiplo(s) de 5\n",c5);
	return 0;
}