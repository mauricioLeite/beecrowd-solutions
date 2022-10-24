#include<bits/stdc++.h>
using namespace std;

int students[1001];

int main(){
	int n;
	while(cin >> n, n){
		int integer, real;
		double sum = 0, each, change1 = 0, change2 = 0;
		for(int i = 0; i < n; i++){
			scanf("%d.%d", &integer, &real);
			students[i] = integer*100 + real;
			sum += students[i];
		}
		each = sum/((double)n);
		for(int i = 0; i < n; i++){
			if(students[i] < each)
				change1 += (int)(each - students[i])/100.0;
			else
				change2 += (int)(students[i] - each)/100.0;
		}
		if(change1 > change2)
			printf("$%.2lf\n", change1);
		else
			printf("$%.2lf\n", change2);

	}

	return 0;
}
