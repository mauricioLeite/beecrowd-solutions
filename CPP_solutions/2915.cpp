#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 1, prev, in;
	cin >> n;
	cin >> prev;
	for(int i = 0; i < n-1; i++){
		cin >> in;
		if(in > prev)
			count++;
		prev = in;
	}
	cout << count << endl;
	return 0;
}