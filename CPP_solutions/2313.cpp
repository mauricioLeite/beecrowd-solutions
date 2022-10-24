#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(( a+b > c) && ( b+c > a) && ( a+c > b))
	{
		if((a==b) && (a==c))
		{
			printf("Valido-Equilatero\n");
		}
		else if((a==b) || (a==c) || (b==c))
		{
			printf("Valido-Isoceles\n");
		}
		else
		{
			printf("Valido-Escaleno\n");
		}
		int a2,b2,c2;
		a2 = a*a;	b2=b*b;	c2=c*c;
		if((a2+b2 == c2) || (b2+c2 == a2) || (a2+c2 == b2))
		{
			printf("Retangulo: S\n");
		}
		else
		{
			printf("Retangulo: N\n");
		}
	}
	else
	{
		printf("Invalido\n");
	}
	return 0;
}