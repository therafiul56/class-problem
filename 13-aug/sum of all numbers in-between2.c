#include<stdio.h>

int main()
{
    int P, R,sum=0;
    
    printf(" Enter the value of 1st number:");
    scanf("%d",&P);
    printf(" Enter the value of 2nd number :");
    scanf("%d",&R);
    for(int i=P;i<=R;i++){
       sum = sum + i;
    }
    printf("sum = %d",sum);
    return 0;
}
