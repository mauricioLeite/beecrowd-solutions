#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> fib;

void init(int a, int b, int sum);
int binary_search(int key);

int main(){
	fib.pb(1);
	fib.pb(2);
	init(0,1,3);
	int n;
	scanf("%d", &n);
	while(n--){
		int x;
		scanf("%d", &x);
		int i = binary_search(x);
		int ans = (1<<i);
		x -= fib[i];
		while(i >= 0 && x){
			i--;
			if(x >= fib[i]){
				x -= fib[i];
				ans |= (1 << i);
			}
		}
		ans >>= 1;
		int sub;
		int bit;
		int conversor = 0;
		while (ans)
		{
			sub = (ans & (-ans));
			bit = 0;
		
			ans -= sub;
			while (sub > 1)
			{
				++bit;
				sub >>= 1;
			}
			conversor += fib[bit];
		}
		
		cout << conversor << '\n';
	}
	return 0;
}

void init(int a, int b, int sum){
	sum = fib[a]+fib[b];
	if(sum <= 25000){
		fib.pb(sum);
		a++;
		b++;
		init(a++, b++, sum);
	}
}

int binary_search(int key){
	int left = 0;
	int right = fib.size()-1;
	int mid;
	while(left <= right){
		mid = (left+right)/2;
		if(fib[left] == key) return left;
		if(fib[right] == key) return right;
		if(fib[mid] <= key && key < fib[mid+1])
			return mid;
		if(fib[mid] > key)
			right = mid - 1;
		else
			left = mid+1;
	}
	return right;
}