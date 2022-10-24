#include <stdio.h>

int main(){
	int n,v[5],r,i,cont	;
	char resp;
	
	while(scanf("%d",&n) && n != 0)
	{
		while(n--)
		{
			cont = 0;
			scanf("%d%d%d%d%d",&v[0],&v[1],&v[2],&v[3],&v[4]);
			for(i=0;i<5;i++)
			{
				if(v[i]<=127)
				{
					r = i;
					cont++;
				}
			}
			if(cont != 1) resp = '*';
			else
			{
				if (r == 0) resp = 'A';
				else if(r == 1) resp = 'B'; 	
				else if(r == 2) resp = 'C'; 
				else if(r == 3) resp = 'D';
				else if(r == 4) resp = 'E';
			}
			printf("%c\n",resp);

		}
	} 
	return 0;
}