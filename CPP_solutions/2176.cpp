#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[150];
	int i, count = 0;
	cin >> str;
	for(i=0; str[i]; i++)
	{
		if(str[i]=='1')
			count++;
	}
	if(count%2 == 0)
		str[i] = '0';
	else
		str[i] = '1';
	str[i+1] = '\0';
	cout << str << endl;
	return 0;
}