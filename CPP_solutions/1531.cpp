#include <bits/stdc++.h>
 
 
using namespace std;
typedef long long ll;
 
ll P;

ll Fib (ll n)
{
    ll msb_position = 63;
    while (!((1 << (msb_position-1) & n)) && msb_position >= 0)
        msb_position--;
 
    ll a=0, b=1; 
 
    for (ll i=msb_position; i>=0;--i)
    {       
        ll d = (a%P) * ((b%P)*2 - (a%P) + P),
            e = (a%P) * (a%P) + (b%P)*(b%P);
        a=d%P;
        b=e%P;
 
        if (((n >> i) & 1) != 0)
        {
            ll c = (a + b) % P;
            a = b;
            b = c;
        }
    }
    return a;
}  

ll discovery(ll m)
{
	ll a = 1;
	ll b = 1;
	ll ans = 1;
	
	while (1)
	{
		ll temp = b % m;
		b = (a + b) % m;
		a = temp;
		++ans;
		
		if (a == 1 && b == 1) return ans - 1;
	}
}
 
int main ()
{
    ll i;
    ll m;
    
    while (cin >> i >> m)
    {
        P = discovery(m);
        ll f = Fib(i);
        P = m;
        printf("%lld\n",Fib(f));
    }
    return 0;
}