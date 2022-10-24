#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std; 

int main()
{
	string text;
	int len;
	getline(cin,text);
	len = text.length();
	cout << (len <= 140 ? "TWEET" : "MUTE") << endl;
	return 0;
}