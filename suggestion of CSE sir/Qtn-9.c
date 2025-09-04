#include <stdio.h>

int main() {
    int N,A,K,sum=0,remainer;
    scanf("%d",&N);
    A=N;
    while(N!=0)
    {
        remainer=N%10;
        sum=sum*10+remainer;
        N/=10;
    }
    printf("the reverse num is :%d, which is,\n",sum);
    if(A==sum)
    {
    printf("palindrome");
    }
    else
    {
        printf(" not palindrome ");
    }

    return 0;
}
