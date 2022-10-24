#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n, str_len;
	double ans;
	string word;
	cin >> n;
	while(n--)
	{
		cin >> word;
		str_len = word.length();
		ans = str_len * 0.01;
		printf("%.2lf\n", ans);
	}
	return 0;
}