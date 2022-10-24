#include <bits/stdc++.h>
using namespace std;

int last(int, int);

int main(){
	int n, m;
	while(cin >> n, n){
		m = 1;
		while(last(n,m) != 11){
			m++;
		}
		cout << m << endl;
	}
	return 0;
}

int last(int n, int m){
	int end = 0;
	for(int i = 1; i < n; i++){
		end = (end+m)%i;
	}
	return end;
}