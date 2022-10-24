#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	int len;
	string text;
	getline(cin, text);
	len = text.length();
	cout << (len<=80? "YES":"NO") << endl;
	return 0;
}