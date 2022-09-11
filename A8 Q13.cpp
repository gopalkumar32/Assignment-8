#include<stdio.h>
int main()
{
        int i,j;
        char n;
        for(i=1;i<=7;i++)
        {
                n='A';
                for(j=1;j<=13;j++)
                {
                        if((j>=1&&j<=8-i)||(j>=6+i&&j<=13))
                        {
                              printf("%c",n);
                              j<7?n++:n--;
                        }
                        else
                        {
                        printf(" ");
                        if(j==7)
                        n--;
                ;
                        }
                
                }
                printf("\n");
        }
}
