#include <bits/stdc++.h>
using namespace std;

int main()
{
	int mes, dia, rest;
	while(scanf("%d %d", &mes, &dia) != EOF)
	{
		if(mes==12)
		{
			if(dia==25)
				cout << "E natal!\n";
			else if(dia==24)
				cout << "E vespera de natal!\n";
			else if(dia>25)
				cout << "Ja passou!\n";
			else
			{
				rest = 25 - dia;
				printf("Faltam %d dias para o natal!\n",rest);
			}
		}
		else
		{			
			if(mes==11)
				rest = 55 - dia; 
			if(mes==10)
				rest = 86 - dia; 
			if(mes==9)
				rest = 116 - dia; 
			if(mes==8)
				rest = 147 - dia; 
			if(mes==7)
				rest = 178 - dia; 
			if(mes==6)
				rest = 208 - dia; 
			if(mes==5)
				rest = 239 - dia; 
			if(mes==4)
				rest = 269 - dia; 
			if(mes==3)
				rest = 300 - dia; 
			if(mes==2)
				rest = 329 - dia; 
			if(mes==1)
				rest = 360 - dia;
			printf("Faltam %d dias para o natal!\n",rest);
		}
	}
	return 0;
}