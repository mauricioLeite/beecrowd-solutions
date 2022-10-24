#include <stdio.h>  
int main()  
{  
    int N,X=1,Y=1,A,b,c=0;    
    while(X>0 && Y>0){
	scanf("%d%d",&X,&Y);
	if(X>0 && Y>0){
		if(X==Y)  
		{  
		    c=0;  
		    printf("%d\n",c);  
		}  
		else if(X<Y)  
		{  
		    for(b=X,c=0;b<=Y;b++)  
		    {
			printf("%d ",b);	    	
			c+=b;  
		    }  
		    printf("Sum=%d\n",c);  
		}  
		else  
		{  
		    for(b=Y,c=0;b<=X;b++)  
		    {    
			printf("%d ",b);             
			c+=b;  
		    }  
		    printf("Sum=%d\n",c);  
		}  
	}
     }  
    return 0;  
}  