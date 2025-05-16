#include <stdio.h>
int main() 
{
    int a,b,c;
    int large()
    {
        if(a<b&&b>a)
        return a;
        else
        if(b<a&&b>c)
        return b;
        else
        return c;
    }
    printf("enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    int result= large(a,b,c);
    printf("%d is large",result);
        
    }
    
