#include <stdio.h>
// A code for table.
int main() {
  int A;
  printf("Enter the number of table: ");
  scanf("%d",&A);
  for (int i=0;i<=10;i++){
      printf("%d * %d = %d\n",A,i,A*i);
  }
    return 0;
}
