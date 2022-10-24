#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 0 || n == 1)
            cout << "Not Prime\n";
        else{
            int root;
            bool prime = true;
            root = sqrt(n);
            for(int i = 2; i <= root; i++){
                if(n % i == 0){
                    prime = false;
                    break;
                }
            }
            (prime)?cout << "Prime\n":cout << "Not Prime\n";
        }
    }
    return 0;
}
