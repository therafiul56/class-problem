#include <stdio.h>

int main() {
    int Num,remainer,sum=0,A;
    printf("enter a number:");
    scanf("%d",&Num);
    A=Num;
    while(Num!=0)
    {
        remainer= Num%10;
        sum=sum+remainer;
        Num/=10;
        
    }
    printf("The sum of the digit of %d : %d",A,sum);
    
    return 0;
}
