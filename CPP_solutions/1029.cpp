#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll calls = 0;
int fib(int);

int main(){
    int n, a;
    ll f;
    cin >> n;
    while(n--){
        cin >> a;
        f = fib(a);
        printf("fib(%d) = %lld calls = %lld\n", a, calls-1, f);
        calls = 0;
    }
    return 0;
}

int fib(int x){
    if(x == 0){
        calls++;
        return 0;
    }
    if(x == 1){
        calls++;
        return 1;
    }
    calls++;
    return (fib(x - 1)+fib(x - 2));
}