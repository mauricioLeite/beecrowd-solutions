#include <bits/stdc++.h>

using namespace std;

int main()
{
	stack<char> p;
	string s;
	int len, cont, n;

	cin >> n;
	while(n--)
	{
		cont = 0;
		cin >> s;
		len = s.size();
		for(int i = 0; i < len; i++)
		{
			if( s[i] != '.')
			{
				if( s[i] == '<')
				{
					p.push(s[i]);
				}
				else
				{
					if(p.empty())
					{

					}
					else
					{
						cont++;
						p.pop();
					}
				}
			}
		}
		cout << cont << endl;
		while(!p.empty())
		{
			p.pop();
		}
	}

}