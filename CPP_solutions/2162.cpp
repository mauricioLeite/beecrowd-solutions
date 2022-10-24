#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n, count = 1;
	cin >> n;
	int med[n];
	for(int i = 0; i < n; i++) cin >> med[i];
	if(n==2 && med[0] == med [1]) count = 0;
	else
	{
		for(int i  = 2; i < n; i++)
			if(med[i] >= med[i-1] && med[i-1] >= med[i-2])
			{
				count = 0;
				break;
			}
			else if(med[i] <= med[i-1] && med[i-1] <= med[i-2])
			{
				count = 0;
				break;
			}	
	}
	cout << (count==1? "1":"0") << endl;
	return 0;
}