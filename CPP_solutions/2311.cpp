#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in", "r", stdin);
	int n;
	scanf("%d", &n);
	char name[1000];
	double dif, nota, final, total = 0, maior = 0.00, menor = 10.00;
	for(int i = 0; i < n; i++)
	{
		scanf("%s", name);
		scanf("%lf", &dif);
		for(int j = 0; j< 7; j++)
		{
			scanf("%lf", &nota);
			if(nota > maior)
				maior = nota;
			if(nota < menor)
				menor = nota;
			total += nota;
		}
		final = dif * (total - maior - menor);
		printf("%s %.2lf\n", name, final);
		total = 0;
		maior = 0.00;
		menor = 10.00;
	}
	return 0;
}