#include<stdio.h>
int main()
{
        int i,j,n=5;
        for(i=1;i<=n;i++)    
        {
                for(j=1;j<=9;j++)
                { 
                        if((j>=6-i&&j<=4+i))
                        printf("*");
                        else
                        printf(" ");

                }
                printf("\n");
        }
        for(i=1;i<=4;i++)
        {
                for(j=1;j<=9;j++)
                {
                        if(j>=i+1&&j<=9-i)
                        printf("*");
                        else
                        printf(" ");
                }
                printf("\n");
        }
}
