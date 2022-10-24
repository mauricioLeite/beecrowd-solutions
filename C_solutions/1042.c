#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			if(b>c){
				printf("%d\n",c);
				printf("%d\n",b);
				printf("%d\n",a);
			}else{
				printf("%d\n",b);
				printf("%d\n",c);
				printf("%d\n",a);
			}
					
		}else{
			printf("%d\n",b);
			printf("%d\n",a);
			printf("%d\n",c);		
		}	
	}else{
		if(b>c){
			if(a>c){
				printf("%d\n",c);
				printf("%d\n",a);
				printf("%d\n",b);
			}else{
				printf("%d\n",a);
				printf("%d\n",c);
				printf("%d\n",b);
			}	
		}else{
			printf("%d\n",a);
			printf("%d\n",b);
			printf("%d\n",c);
		}
	}
	printf("\n%d\n%d\n%d\n",a,b,c);

	return 0;
}