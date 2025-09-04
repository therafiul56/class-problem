#include <stdio.h>

int main() {
    int Num,sum=0;
    printf("enter a number:");
    scanf("%d",&Num);
    for(int i=1 ; i<=Num ; i++)
    {
           if(i%2!=0){
               sum=sum+i;
           }
    }
     printf("the sum of odd numbers from 1-%d is: %d ",Num,sum);
    
    return 0;
}
