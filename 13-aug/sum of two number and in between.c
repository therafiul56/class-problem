#include <stdio.h>
// A code for table.
int main() {
  int n,m;
  printf("Enter the 1st number: ");
  scanf("%d",&n);
  printf("Enter the 2nd number: ");
  scanf("%d",&m);
  
  for (int i = n; i<=m ;i++){
    //  printf("%d + %d = %d\n",i,m,i+m);
    for(int j = n; j<=i;j++){
        printf("%d + %d = %d\n",j,i,j+i);
    }
  }
    return 0;
}
