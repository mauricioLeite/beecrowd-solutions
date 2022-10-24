# include <stdio.h>
# include <string.h>

int main()
{
    char buffer[100];
    int aktCol = 0;
    while(scanf(" %s", buffer) == 1)
    {
        if( !strcmp( buffer, "<br>" ) )
        {
            printf( "\n" );
            aktCol = 0;
        }
        else if( !strcmp( buffer, "<hr>" ) )
        {
            if( aktCol > 0 )
            {
                printf( "\n" );
                aktCol = 0;
            }
            printf( "--------------------------------------------------------------------------------\n" );
            aktCol = 0;
        }
        else
        {
            if( aktCol == 0 )
            {
                printf( "%s", buffer );
                aktCol += strlen( buffer );
            }
            else
            {
                if( aktCol + strlen( buffer ) + 1 >= 80 )
                {
                    printf( "\n");
                    aktCol = 0;
                    printf( "%s", buffer );
                    aktCol += strlen( buffer );
                }
                else
                {
                    printf( " %s", buffer );
                    aktCol += strlen( buffer ) + 1;
                }
            }
        }
    }
    if( aktCol > 0 )
    printf( "\n" );
    return 0;
}