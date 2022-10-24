#include <bits/stdc++.h>

using namespace std;

char s[5002];
string ans,gene="NOP";

bool comparar(int i, int j, int n)
{
	for(int m = 0; m < n; ++m)
	{
		if(s[i] != s[j]) return false;
		i++; j++;
	}
	return true;
}

bool valido(int len)
{
	for(int i = 1; i + i <= len; i++)
	{
		if(comparar(len - i - i, len - i, i))
			return false;
	}
	return true;
}

bool gen(int len)
{
	if(len == 5002)
	{
		ans = s;
		return true;
	}
	for(int i=0; i < 3; i++)
	{
		s[len] = gene[i];
		if(valido(len) && gen(len+1))
			return true;
	}
	return false;
}

int main()
{
	int num;
	gen(0);
	while(cin >> num && num)
	{
		int i=0;
		for (int i = 0; i < num; i++)
		{
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}