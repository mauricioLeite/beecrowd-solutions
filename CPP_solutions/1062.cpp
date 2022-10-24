#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, cont, cont2, vec[1001];
	bool act, act2;

	while (1)
	{
		scanf("%d", &n);
		if ( n == 0) break;
		while(1)
		{
			act = false;
			act2 = false;
			stack<int> station;
			for(int i = 1; i <= n; i++)
			{
				scanf("%d", &vec[i]);
				if(vec[i] == 0)
				{
					act = true;
					cout << endl;
					break;
				}
			}
			cont = 1;
			cont2 = 1;
			while(1)
			{
				if(cont > n) break;
				if(act) break;
				if(act2) break;
				while(1)
				{
					if(!station.empty() && station.top() == vec[cont])
					{
						station.pop();
						break;
					}
					else if(cont2 <= n)
					{
						station.push(cont2);
						cont2++;
						if(station.top() == vec[cont])
						{
							station.pop();
							break;
						}
					}
					else
					{
						act2 = true;
						break;
					}
				}
				cont++;
			}
			if(act) break;
			cout << (station.empty()? "Yes":"No") << endl;
		}
	}

	return 0;
}
