#include <stdio.h>

int main() {
	int a;
  	printf("Input size of array: ");
	scanf("%d",&a);
	int arr[a];
	printf("Input array elements: ");
	for(int i = 0 ; i< a ; i++){
	    scanf("%d",&arr[i]);
	}
	int min = arr[0], max = arr[0];
	for(int i = 0 ; i< a ; i++){
	    for(int j = i+1 ; j< a ;j++){
	        if(arr[i]>arr[j]){
	            int temp = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp;
	        }
	    }
	}
	printf("Array sorted in ascending order: ");
	for(int i = 0 ; i< a ; i++){
	    printf("%d ",arr[i]);
	}
	return 0;

}

