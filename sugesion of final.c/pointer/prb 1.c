#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int *p = &a;
	int *q = &b;
	int sum = *p + *q;
	printf("%d",sum);
	return 0;

}

