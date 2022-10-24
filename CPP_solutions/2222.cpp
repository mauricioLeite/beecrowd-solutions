#include <bits/stdc++.h>

using namespace std;

int conjs[5000][5000], ne[5000], n, nc, no, op, c1, c2, ele=0, el;

int main()
{ 
	scanf("%d", &n); 
	while(scanf("%d", &nc)!=EOF)
	{
		for(int i = 1; i <= nc; i++)
		{ 
			scanf("%d", &ne[i]); 
			for(int j = 1; j <= ne[i]; j++)
			{ 
				scanf("%d", &el); 
				conjs[i][el] = 1; 
			} 
		} 
		scanf("%d", &no); 
		for(int i = 0; i < no; i++)
		{ 
			scanf("%d %d %d", &op, &c1, &c2); 
			if(op == 1)
			{ 
				for(int j = 1; j < 62; j++)
				{ 
					if(conjs[c1][j]==1 && conjs[c2][j]==1)
					{ 
						ele++; 
					} 
				} 
			} 
			if(op == 2)
			{ 
				for(int j = 1; j < 62; j++)
				{ 
					if(conjs[c1][j] == 1 || conjs[c2][j]== 1)
					{ 
						ele++; 
					} 
				} 
			} 
			printf("%d\n", ele); 
			ele = 0; 
		} 
		for(int i = 1; i <= nc; i++)
		{ 
			for(int j = 1; j <= 62; j++)
			{ 
				conjs[i][j]=0; 
			} 
		} 
	} 
	return 0;
}
