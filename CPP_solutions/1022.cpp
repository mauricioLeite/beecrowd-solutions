#include <bits/stdc++.h>
using namespace std;

int PreGCD(int a, int b);
int gcd(int a, int b);

int main(){
	int cont,N1,N2,D1,D2,num,den,d;
	char c1,c2,c3;
	scanf("%d",&cont);
	while(cont--){
		scanf("%d %c %d %c %d %c %d", &N1, &c1, &D1, &c2, &N2, &c3, &D2);
		if(c2 == '+'){
			num = (N1*D2+N2*D1);
			den = (D1*D2);
		}else if(c2 == '-'){
			num = (N1*D2-N2*D1);
			den = (D1*D2);			
		}else if(c2 == '*'){
			num = (N1*N2);
			den = (D1*D2);
		}else if(c2 == '/'){
			num = (N1*D2);
			den = (N2*D1);
		}
		d = PreGCD(num, den);
		printf("%d/%d = %d/%d\n", num, den, num/d, den/d);		
	}	
	return 0;
}

int PreGCD(int a, int b){
    int resto;
    if(b > a){
        b += a;
        a = b - a;
        b = b - a;
    }
    if(a < 0){
        a *= -1;
    }
    if(b < 0){
        b *= -1;
    }
    return gcd(a, b);
}

int gcd(int a, int b){
	if(b)
		return gcd(b, a%b);
	else
		return a;
}