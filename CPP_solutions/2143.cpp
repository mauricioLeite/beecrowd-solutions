#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n;
	while(scanf("%d", &n))
	{
		int quant;
		if( n == 0)
			break;
		while(n--)
		{
			cin >> quant;
			if(quant%2) cout << quant*2-1 << endl;
			else cout << quant*2-2 << endl;
		}
	}	
	return 0;
}