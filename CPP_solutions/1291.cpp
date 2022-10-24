#include<bits/stdc++.h>
using namespace std;

int main(){
	double l, area1, area2, area3;
	while(scanf("%lf", &l) != EOF){
		area3 = -1 * l * l * (3 * (sqrt(3) - 4) + 2 * M_PI)/3.0;
		area2 = 4 * (l * l * (1 - M_PI/4) - (area3 / 2));
		area1 = l * l - area2 - area3;
		printf("%.3lf %.3lf %.3lf\n", area1, area2, area3);
	}
	return 0;
}