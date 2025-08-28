/*1   1
  12 21
  12321*/
#include <stdio.h>

int main() {
    int a=3,b;
    b=a;
    for(int i=1;i<=a;i++)
    {
        for(int j =1 ;j<=i ; j++)
        {
            printf("%d",j);
        }
        for(int k=b ;k>1 ;k-=2 )
        {
            printf(" ");
            b-=2;
        }
        for(int l=1 ; l<=a-i;l++)
        {
            printf(" ");
        }
        for(int j =i ;j>=1 ; j--)
        {  
            if(j==a && i==a)
            {
                continue;
            }
        
            printf("%d",j);
        }
        
        printf("\n");
    }
    
    return 0;
}
