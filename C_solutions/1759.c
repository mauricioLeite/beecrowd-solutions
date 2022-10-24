#include <stdio.h>

int main ()
{
	int i;
	scanf("%d",&i);
	while(i--)
	{
		if(i==0)
		{
			printf("Ho!\n");
		}else
		{
			printf("Ho ");
		}
	}
	
	return 0;
}