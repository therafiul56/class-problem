#include <stdio.h>
int facto(int x);

int main() {
    int a,b;
    scanf("%d",&a);
    b=a;
    for(int Row=0;Row<=a;Row++)
    {
        for(int k=1 ;k<=a-Row; k++)
        {
            printf(" ");
        }
        for(int Col =0 ;Col<=Row ; Col++)
        {
        int result= ((facto(Row))/(facto(Col)*facto(Row-Col)));
            printf("%d ",result);
        }
        printf("\n");
    }
   
}



int facto(int x){
    int facto=1;
    for(int i=1 ;i<=x ; i++ ){
        
        facto = facto * i;
        
    }
    return facto;
    }
