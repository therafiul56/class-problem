#include<stdio.h>
int main(){
  int a;
  printf("enter a number:");
  scanf("%d",&a);
  switch(a%2!=0){
   case 0 :printf("its an even number");break;
   case 1: printf("its an odd number");break;
  }
}
