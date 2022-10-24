#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

bool busca(int t)
{
	int bill[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
	for(int i = 0; i < 15; i++)
	{
		if(bill[i] == t)
			return true;
	}	
	return false;
}

int main()
{
	int n, m, troco; 	
	while(1)
	{
		cin >> n >> m;
		if(n==0 && m==0)
			break;
		troco = m - n;
		if(busca(troco))
		{
			cout << "possible" << endl;
		}
		else
		{
			cout << "impossible" << endl;
		}
	}
	return 0;
}