#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	double ans = 0.0;
	cin >> n;
	while(n--)
	{
		ans+=2.0;
		ans = 1.0/ans;
	}
	ans += 1.0;
	printf("%.10lf\n", ans);
	return 0;
}
