#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num, l, test;
	cin >> test;
	while(test--)
	{
		cin >> l;
		num = pow(2,l) - 1;
		cout << num << endl;
	}
	return 0;
}