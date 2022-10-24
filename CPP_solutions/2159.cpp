#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	double n, min, max;
	cin >> n;
	min = (n/log(n));
	max = 1.25506*min;
	printf("%.1lf %.1lf\n", min, max);
	return 0;
}