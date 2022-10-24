#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n, m, pos[2] = {0,0};
	cin >> n >> m;
	int camp[n][m];	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> camp[i][j];
		}
	}
	for(int i = 1; i < n-1; i++)
	{
		for(int j = 1; j < m-1; j++)
		{
			if(camp[i][j] == 42)
			{
				if(camp[i-1][j-1]==7 && camp[i-1][j]==7 && camp[i-1][j+1]==7)
					if(camp[i][j-1]==7 && camp[i][j+1]==7)
						if(camp[i+1][j-1]==7 && camp[i+1][j]==7 && camp[i+1][j+1]==7)
						{
							pos[0] = i + 1;
							pos[1] = j + 1;
							break;					
						}
			}
		}
	}
	cout << pos[0] << " " << pos[1] << endl;
	return 0;
}