// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int A,count=0;
    scanf("%d",&A);
    if(A<=1){
       count++;
    }
    if(A>1)
    {
        for(int i=2 ; i<A/2 ; i++ )
        {
            if(A%i==0)
            {
                count++;
                break;
            }
            
        }
    }

    if(count==1)
    {
        printf("not prime");
    }
    else if(count==0)
    {
        printf("prime");
    }
    return 0;
}
