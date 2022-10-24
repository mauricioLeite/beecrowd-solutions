#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll n;
	while(scanf("%lld", &n) && n)
	{
		for(ll i = 1; i*i <= n; ++i)
		{
			if(i > 1) printf(" ");
			printf("%lld", i*i);
		}	
		printf("\n");
	}
	return 0;
}