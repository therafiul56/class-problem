#include <stdio.h>

int main() {
	int a;
	printf("enter the number of student : ");
	scanf("%d",&a);
	int arr[a];
	printf("enter the markes : ");
	for(int i = 0 ; i< a ; i++){
	    scanf("%d",&arr[i]);
	}
	int min = arr[0], max = arr[0];
	for(int i = 0 ; i< a ; i++){
	    if(arr[i]>max){
	        max = arr[i];
	    }
	    if(arr[i]<min){
	        min = arr[i];
	    }
	}
	printf("mark range : %d - %d",min,max);
	return 0;

}

