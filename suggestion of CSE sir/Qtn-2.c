#include <stdio.h>

int main() {
    int Num,sum=0;
    scanf("%d",&Num);
    for(int i=1 ; i<=Num ; i++)
    {
            sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}
