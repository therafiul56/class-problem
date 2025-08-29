#include <stdio.h>

int main() {
    int B,c,sum=0;
   
    printf("Enter the digit:");
    scanf("%d",&B);
    for(; B%10>0;){
        c=B%10;
        sum=sum+c;
        B/=10;
    }
    printf("sum = %d",sum);
    
    

    return 0;
}
