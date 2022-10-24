#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("in","r",stdin);
//    freopen("out","w", stdout);
	int t;
	while(scanf("%d",&t) && t)
	{
		long long int total = 0;
		while(t--)
		{
			int n;
			string name;
			scanf("%d ", &n);
			getline(cin,name);
			if(name == "suco de laranja")
				total += n * 120;
			else if(name == "morango fresco" || name == "mamao")
				total += n * 85;
			else if(name == "goiaba vermelha")
				total += n * 70;
			else if(name == "manga")
				total += n * 56;
			else if(name == "laranja")
				total += n * 50;
			else if(name == "brocolis")
				total += n * 34;
		}
		if(total < 110)
		{
			printf("Mais %lld mg\n", 110-total);
		}
		else if(total > 130)
		{
			printf("Menos %lld mg\n", total-130);
		}
		else
		{
			printf("%lld mg\n", total);
		}
	}
	return 0;
}