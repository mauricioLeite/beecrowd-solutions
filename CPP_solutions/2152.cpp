#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int n, h, m, o;
	cin >> n;
	while(n--)
	{
		cin >> h >>  m >> o;
		cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) <<  m << " - A porta " << (o? "abriu!":"fechou!") << endl;
	}
	return 0;
}