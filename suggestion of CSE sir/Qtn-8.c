#include <stdio.h>

int main() {
    int Num,remainer,sum=1,A;
    printf("enter a number:");
    scanf("%d",&Num);
    for(int i=1 ; i<=Num ; i++){
            sum=sum*i;
    }
    
    printf("The factorial  %d is %d",Num,sum);
    
    return 0;
}
