#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	long long a, b, result;
	cin >> n;
	while(n--){
		cin >> a >> b;
		result = ((a)/3LL)*((b)/3LL);
		cout << result << endl; 
	}
	return 0;
}