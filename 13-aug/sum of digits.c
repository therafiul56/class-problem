// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int A,B,c,sum=0;
    printf("Enter numbers of digit:");
    scanf("%d",&A);
    printf("Enter the digit:");
    scanf("%d",&B);
    for(int i=1 ; i<=A;i++){
        c=B%10;
        sum=sum+c;
        B/=10;
    }
    printf("sum = %d",sum);
    
    

    return 0;
}
