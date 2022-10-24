#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double fib, raiz;
	raiz = sqrt(5);
	cin >> n;
	fib = (pow(((1+raiz)/2.0),n)-pow(((1-raiz)/2.0),n))/raiz;
	printf("%.1lf\n", fib);
	return 0;
}