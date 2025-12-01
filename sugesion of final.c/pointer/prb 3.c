#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	int arr[a],brr[a];
	for(int i = 0 ; i< a ; i++){
	    scanf("%d",arr+i);
	    *(brr+i) = 0;
	}
	for(int i = 0 ; i< a ; i++){
	    *(brr+i) = (*arr+i);
	}
	for(int i = 0 ; i < a ; i++){
	    printf("%d ",*brr+i);
	}
	return 0;

}
