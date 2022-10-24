#include <bits/stdc++.h>
using namespace std;
#define NMAX 60000000

int main () {
        long long x, y;
        cin >> x >> y;
        if(x == 1 || y==1)
        	printf("1\n");
        else if(__gcd(x,y) != 1)
        	cout << "IMPOSSIVEL" << endl;
        else{
	        long long a = x - 1, b = - y + 1, ans = 1;
	        while (a != 0 && b != 0) {
	                ans++;
	                if (ans > NMAX) {
	                        cout << "IMPOSSIVEL" << endl;
							break;
	                }
	                (a > 0)? a -= y : a += x;                
	                (b > 0)? b -= y : b += x;
	        }
	        cout << ans << endl;
        }
        return 0;
}