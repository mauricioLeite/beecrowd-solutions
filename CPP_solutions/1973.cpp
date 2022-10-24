#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	scanf("%lld", &n);
	long long int star[n], sheep[n], sum_trak = 0, sum_sheep = 0;
	for(int i=0; i<n; i++)
	{
		scanf("%lld", &sheep[i]);
		star[i] = 0;
	}
	int pos = 0;
	while(1)
	{
		if(pos==0 && sheep[pos]%2 == 0)
		{
			star[pos] = 1;
			if(sheep[pos] > 0)
				sheep[pos]--;
			break;
		}
		else if(pos == n-1 && sheep[pos]%2 == 1)
		{
			star[pos] = 1;
			if(sheep[pos] > 0)
				sheep[pos]--;
			break;
		}
		else if(sheep[pos]%2 == 1)
		{
			star[pos] = 1;
			if(sheep[pos] > 0)
				sheep[pos]--;
			pos++;
		}
		else if(sheep[pos]%2 == 0)
		{
			star[pos] = 1;
			if(sheep[pos] > 0)
				sheep[pos]--;
			pos--;
		}
	}
	for(int i = 0; i < n; i++)
	{
		sum_sheep += sheep[i];
		sum_trak += star[i];
	}
	printf("%lld %lld\n", sum_trak, sum_sheep);
	return 0;
}
