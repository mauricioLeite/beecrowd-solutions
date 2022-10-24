#include <bits/stdc++.h>

using namespace std;

int main()
{
	 long long int x, posicao, maior = 0;
	int i;
	
	
	
	for(i = 1; i<=100; i++)
	{
			scanf("%lld", &x);
			
		if( x > maior)
		{
			maior = x;
			posicao = i;
			
		}	
		
	}
printf("%lld\n", maior);
printf("%lld\n", posicao);

	return 0;
}