#include <stdio.h>

int main(){
	int n1,n2;
	float total;
	scanf("%d%d",&n1,&n2);
	switch(n1){
		case 1:	total = 4.00*n2;
			break;
		case 2:	total = 4.50*n2;
			break;
		case 3:	total = 5.00*n2;
			break;
		case 4:	total = 2.00*n2;
			break;
		case 5:	total = 1.50*n2;
			break;
	}
	printf("Total: R$ %.2f\n",total);
	return 0;
}