#include <stdio.h>

int main() {
    int Num,sum=0;
    printf("enter a number:");
    scanf("%d",&Num);
    for(int i=1 ; i<=10 ; i++)
    {
        printf("%d * %d = %d\n",Num,i,Num*i);
    }
    
    return 0;
}
