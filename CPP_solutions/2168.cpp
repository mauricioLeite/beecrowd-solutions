#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n;
	cin >> n;
	int quad[n+1][n+1];

	for(int i = 0; i < n+1; i++)
		for(int j = 0; j < n+1; j++)
			cin >> quad[i][j];
	for(int i = 0; i < n; i++ )
	{
		for(int j = 0; j < n; j++)
		{
			int count = 0;
			if(quad[i][j] == 1) count++;
			if(quad[i][j+1] == 1) count++;
			if(quad[i+1][j] == 1) count++;
			if(quad[i+1][j+1] == 1) count++;
			cout << (count<2? "U":"S"); 
		}
		cout << endl;
	}
	return 0;
}