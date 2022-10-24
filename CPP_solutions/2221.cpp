#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int b, val[2][3], p1, p2;
		cin >> b;
		for(int i = 0; i < 2; i++)
			for(int j = 0; j < 3; j++)
				cin >> val[i][j];
		p1 = (val[0][0]+val[0][1])/2;
		p2 = (val[1][0]+val[1][1])/2;
		if(val[0][2]%2 == 0) p1 += b;
		if(val[1][2]%2 == 0) p2 += b;
		if(p1 == p2) cout << "Empate" << endl;
		else cout << (p1 > p2?"Dabriel":"Guarte") << endl;
	}
	return 0;
}