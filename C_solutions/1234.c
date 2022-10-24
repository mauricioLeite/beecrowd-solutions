#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	int i=0,j=0;
	while(gets(s))
	{
		while(i<strlen(s))
		{
			if(s[i] != ' ')
			{
				if(j%2 == 0)
					printf("%c",toupper(s[i]) );
				else
					printf("%c",tolower(s[i]) );
				j++;
			}
			else
				printf(" ");
			i++;
		}
		printf("\n");
		i = 0;
		j = 0;
	}

	return 0;
}