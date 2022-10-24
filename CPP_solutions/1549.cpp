#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1)

#define ld long double

ld findH(int, int, ld, ld, ld);
ld V(ld, ld, ld, ld); 

int main(){
    int c;
    cin >> c;
    while(c--){
        int N, L;
        ld r, R, H;
        cin >> N >> L >> r >> R >> H;
        printf("%.2llf\n", findH(N,L,r,R,H));
    }
    return 0;
}

ld findH(int N, int L, ld r, ld R, ld H){
    int M = 10000;
    ld h, eps, lo, hi, mid, vol, aux_V;
    vol = (ld)L/(ld)N;
    eps = 1e-8;
    lo = eps; 
    hi = H;
    while(lo - eps < hi && M > 0){
        mid = (lo+hi)*0.5;
        aux_V = V(mid, r, R, H);
        if(fabs(aux_V - vol) < eps)
            break;
        if(aux_V < vol){
            lo = mid;
        }
        else{
            hi = mid;
        }
        M--;
    }
    return lo;
}

ld V(ld mid, ld r, ld R, ld H){
    ld B = (((R-r)/H)*mid) + r;
    return ((PI*mid)/3.0)*(B*B+B*r+r*r);
}