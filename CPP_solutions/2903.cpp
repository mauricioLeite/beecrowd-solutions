#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	scanf("%d.%d",&a,&b);
	cout << (36000/__gcd(36000,a*100+b)) <<endl;
	return 0;
}