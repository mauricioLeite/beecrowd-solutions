#include <stdio.h>

int main(){
	double total=0.0;
	int c,quantidade, n1;
	scanf("%d",&c);
	while(c--)
	{
		scanf("%d%d",&n1,&quantidade);
		switch(n1)
		{
			case 1001:
				total += (quantidade * 1.5); 
				break;
			case 1002:
				total += (quantidade * 2.5); 
				break;
			case 1003:
				total += (quantidade * 3.5); 
				break;
			case 1004:
				total += (quantidade * 4.5); 
				break;
			case 1005:
				total += (quantidade * 5.5); 
				break;
		}
	}
	printf("%.2lf\n",total);
	return 0;
}