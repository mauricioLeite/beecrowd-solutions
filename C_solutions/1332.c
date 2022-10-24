#include <stdio.h>
#include <string.h>

int main()
{
    int c;
    char t1[6];
    scanf("%d",&c);
    while(c--)
    {
        scanf("%s", t1);
        if(strlen(t1) == 5)
        {
            printf("3\n");
        }
        else if((t1[0] == 't' &&  t1[1] == 'w') || (t1[0] == 't' && t1[2] == 'o') || (t1[1] == 'w' && t1[2] == 'o'))
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
}

