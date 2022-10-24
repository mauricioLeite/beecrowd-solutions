#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	double x1, y1, x2, y2, v, r1, r2, X, Y, dist, range;
	while(scanf("%lf%lf%lf%lf", &x1, &y1,&x2, &y2) != EOF)
	{
		scanf("%lf%lf%lf", &v, &r1, &r2);
		X = pow(x2-x1,2);
		Y = pow(y2-y1,2);
		dist = sqrt(X+Y);
		dist += v*1.5;
		range = r1 + r2;
		cout << (dist>range? "N":"Y") << endl;
	}

	return 0;
}