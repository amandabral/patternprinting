#include <stdio.h>

int main()
{
    int i=0;
    int n1=5,n2=3,n3=2;
    int N=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
    for(i=1;i<=N;i++)
    {
        if(n1>=(N-i))
        {
            for(int j=1;j<=(n1-i+(N-n1));j++)
            {
                printf(" ");    
            }
            for(int j=1;j<=i-(N-n1);j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=n1;j++)
                printf(" ");
        }
        if(n2>=(N-i))
        {
            for(int j=1;j<=i-(N-n2);j++)
            {
                printf("*");
            }
            for(int j=1;j<=(n2-i+(N-n2));j++)
            {
                printf(" ");    
            }
            
        }
        else
        {
            for(int j=1;j<=n2;j++)
                printf(" ");
        }
        if(n3>=(N-i))
        {
            for(int j=1;j<=(n3-i+(N-n3));j++)
            {
                printf(" ");    
            }
            for(int j=1;j<=i-(N-n3);j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=n3;j++)
                printf(" ");
        }
        printf("\n");
    }
    //BOTTOM PART
        
    for(i= N-1;i>=1;i--)
    {
        if(n1>=(N-i))
        {
            for(int j=1;j<=(n1-i+(N-n1));j++)
            {
                printf(" ");    
            }
            for(int j=1;j<=i-(N-n1);j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=n1;j++)
                printf(" ");
        }
        if(n2>=(N-i))
        {
            for(int j=1;j<=i-(N-n2);j++)
            {
                printf("*");
            }
            for(int j=1;j<=(n2-i+(N-n2));j++)
            {
                printf(" ");    
            }
            
        }
        else
        {
            for(int j=1;j<=n2;j++)
                printf(" ");
        }
        if(n3>=(N-i))
        {
            for(int j=1;j<=(n3-i+(N-n3));j++)
            {
                printf(" ");    
            }
            for(int j=1;j<=i-(N-n3);j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=n3;j++)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}