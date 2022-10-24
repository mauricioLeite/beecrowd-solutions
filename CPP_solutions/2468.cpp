#include <bits/stdc++.h>
#define NMAX 100001
#define pb push_back

using namespace std;

long long p;
vector <int> graph[NMAX];
bool visited[NMAX];

void dfs(int x)
{
	visited[x] = true;
	p++;
	for(int i = 0 ; i < graph[x].size(); i++)
	{
		int y = graph[x][i];
		if(!visited[y])
			dfs(y);
	}
}

int main()
{
	long long n, result = 0;
	memset(visited, false, sizeof visited);

	scanf("%lld", &n);
	for(int i = 0; i < n - 1; ++i)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(c == 0)
		{
			graph[a].pb(b);
			graph[b].pb(a);
		}
	}
	result = (n * (n - 1)) / 2;
	for (int i = 0; i < n; ++i)
	{
		if(!visited[i])
		{
			p = 0;
			dfs(i);
			result -= (p * (p - 1)) / 2;
		}
	}
	printf("%lld\n", result);
	return 0;
}
