#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n, vel, prev=0, pos=0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> vel;
		if(vel<prev)
		{
			pos = i;
			break;
		}
		prev = vel;
	}
	cout << pos << endl;
	return 0;
}