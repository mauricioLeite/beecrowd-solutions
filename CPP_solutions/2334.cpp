#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long int a;
	while(scanf("%llu", &a) && a != -1)
	{
		if(a > 0)
			cout << a-1 << endl;
		else
			printf("0\n");
	}
	return 0;
}