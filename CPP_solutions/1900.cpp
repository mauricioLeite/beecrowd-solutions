#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	map<ll,int> dp;
	dp[0] = 1;
	int x;
	ll sum = 0, ans = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		sum += x;
		ans += dp[sum];
		dp[sum]++;
	}
	printf("%lld\n", ans);
}