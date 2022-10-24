#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m))
	{
		if( n == 0 && m == 0)
			break;
		cout << n * m << endl;
	}	
	return 0;
}