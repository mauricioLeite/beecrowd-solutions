#include <stdio.h>

int main(){
	int h,min,atraso;
	char c;
	while(scanf("%d%c%d",&h,&c,&min)!=EOF){
		if(h<7){
			atraso = 0;
		}else if(h==7){
			atraso = min;
		}else if(h==8){
			atraso = 60 + min;
		}else if(h==9){
			atraso = 120;
		}
		printf("Atraso maximo: %d\n",atraso);
	}
	return 0;
}