#include <bits/stdc++.h>
#define MAXN 26
#define L_NUM(x) (x-'a')
#define NUM_L(x) (x+'a')

using namespace std;

vector<int> graph[MAXN];
vector<int> connected;
bool visited[MAXN];

void clear_graph(void)
{
	memset(visited, false, sizeof visited);
	connected.clear();
	for(int i=0; i < MAXN; i++)
	{
		graph[i].clear();
	}
}

void dfs(int x)
{
	visited[x] = true;
	connected.push_back(x);
	for(int i = 0; i < graph[x].size(); i++)
	{
		int y = graph[x][i];
		if(!visited[y])
		{
			dfs(y);
		}
	}
}

int main()
{
	//freopen("b.in","r",stdin);
	//freopen("b.out","w",stdout);
  	int n, cont, v, e;
  	char a, b;
  	scanf("%d", &n);
	for(int i = 1; i<= n; i++)
  	{
    	cont = 0;
    	printf("Case #%d:\n", i);
    	scanf("%d%d", &v, &e);
    	clear_graph();
    	while(e--)
    	{
      		scanf(" %c %c", &a, &b);
      		graph[L_NUM(a)].push_back(L_NUM(b));
      		graph[L_NUM(b)].push_back(L_NUM(a));
    	}
    	for(int j = 0; j < v; j++)
    	{
    		if(!visited[j])
    		{
    			dfs(j);
    			sort(connected.begin(), connected.end());
    			for(int k = 0; k < connected.size(); k++)
    			{
    				printf("%c,", NUM_L(connected[k]));
    			}
    			printf("\n");
    			cont++;
    			connected.clear();
    		}
    	}
    	printf("%d connected components\n\n", cont);
	}
	return 0;
}