#include<stdio.h>
int main(){
   int a;
   printf("enter the value of a number:");
   scanf("%d",&a);
   if(a%2!=0){
    printf("It's an odd number");
   }
   else if(a==0){
    printf("0 is 0");
   }
   else{printf("its an even number");}
   return 0;
}
