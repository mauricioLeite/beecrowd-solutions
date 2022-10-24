#include <bits/stdc++.h>
using namespace std;

int ascendente(int a, int b);
int descendente(int a, int b);

int main(){
	int n, num;
	vector<int> par, impar;

	scanf("%d", &n);
	while(n--){
		scanf("%d", &num);
		if(num%2 == 0)
			par.push_back(num);
		else
			impar.push_back(num);
	}
	sort(par.begin(), par.end(), ascendente);
	sort(impar.begin(), impar.end(), descendente);
	for(int i = 0; i < par.size(); i++)
		printf("%d\n", par[i]);
	for(int i = 0; i < impar.size(); i++)
		printf("%d\n", impar[i]);
	return 0;
}

int ascendente(int a, int b){
	return (a < b);
}

int descendente(int a, int b){
	return (b < a);
}