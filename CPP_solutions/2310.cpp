#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in","r",stdin);
	int n;
	scanf("%d",&n);
	char name[1000];
	double s, b, a, s1, b1, a1, ans_s, ans_b, ans_a;
	double sum_s = 0.00, sum_b = 0.00, sum_a = 0.00;
    double sum_s1 = 0.00, sum_b1 = 0.00, sum_a1 = 0.00;
	for(int i = 0; i < n; i++)
	{
		scanf("%s", &name);
		scanf("%lf%lf%lf", &s, &b, &a);
		scanf("%lf%lf%lf", &s1, &b1, &a1);
		sum_s += s; sum_b += b; sum_a += a;
		sum_s1 += s1; sum_b1 += b1; sum_a1 += a1;
	}
	ans_s = 100*(sum_s1/sum_s);
	ans_b = 100*(sum_b1/sum_b);
	ans_a = 100*(sum_a1/sum_a);
	printf("Pontos de Saque: %.2lf %%.\n", ans_s);
	printf("Pontos de Bloqueio: %.2lf %%.\n", ans_b);
	printf("Pontos de Ataque: %.2lf %%.\n", ans_a);
	return 0;
}
