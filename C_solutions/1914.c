#include <stdio.h>

int main(){
	int c;
	long long int n1,n2,soma;
	char name1[201],name2[201],choice1[10],choice2[10];
	scanf("%d",&c);
	while(c--)
	{
		scanf("%s%s%s%s",name1,choice1,name2,choice2);
		scanf("%lld%lld",&n1,&n2);
		soma = n1+n2;
		if(choice1[0]=='P')
        {
            if(soma%2==0) printf("%s\n", name1);
            else printf("%s\n", name2);
        }
        else
        {
            if(soma%2==0) printf("%s\n", name2);
            else printf("%s\n", name1);
        }
	}
	return 0;
}