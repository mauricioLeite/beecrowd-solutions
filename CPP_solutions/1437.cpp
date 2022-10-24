#include <bits/stdc++.h>

using namespace std;

string direcao = "NLSO";

int main()
{
	int t, cont;
	string s;
	while(scanf("%d",&t) && t)
	{
		cont = 0;
		cin >> s;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == 'D') cont++;
			else cont--; 
		}

		cont %= 4;
		cont += 4;
		cont %= 4;
		printf("%c\n", direcao[cont]);
	}
	return 0;
}
