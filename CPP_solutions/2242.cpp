#include <bits/stdc++.h>

using namespace std;

string r;
char r1[50],r2[50];

bool comp(int len)
{
	int cont = 0;
	for(int i = 0; i < len; i++)
	{
		if(r1[i] != r2[i]) cont++;
	}
	if(cont == 0) return true;
	else return false;
}

int main()
{
	int a, j = 0;

	cin >> r;
	for(int i = 0; i < r.length(); i++)
	{
		if(r[i]=='a' || r[i]=='e' || r[i]=='i' || r[i]=='o' || r[i]=='u' )
		{
			r1[j] = r[i];
			j++;
		}
	}
	j--;
	a = j;
	for(int i = 0; j >= 0; j--)
	{
		r2[i] = r1[j];
		i++;
	}

	if(comp(a)) cout << "S" << endl;
	else cout << "N" << endl;
	return 0;
}