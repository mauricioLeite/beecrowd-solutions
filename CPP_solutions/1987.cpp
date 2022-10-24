#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t, sum;
	ll n;
	while(scanf("%d%lld", &t, &n)!=EOF)
	{
		sum = 0;
		while(n)
		{
			sum += n%10;
			n /= 10;
		}
		if(sum%3 == 0)
			printf("%d sim\n", sum);
		else
			printf("%d nao\n", sum);
	}
}