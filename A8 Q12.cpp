#include<stdio.h>
int main()
{
        int i,j;
        char n;
        for(i=1;i<=4;i++)
        {
                n='A';
                for(j=1;j<=7;j++)
                  {
                          if(j>=i&&j<=8-i)
                          {
                                  printf("%c",n);
                                  j<4?n++:n--;
                          }
                          else
                          printf(" ");
                  }
                  printf("\n");
        }
}
