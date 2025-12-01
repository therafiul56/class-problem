#include <stdio.h>
void scnarr(int arr[],int a){
    for(int j = 0 ; j<a ; j++){
        scanf("%d",&arr[j]);
    }
}
int main() {
	int a,multy = 1;
	scanf("%d",&a);
	int arr[a];
	scnarr(arr,a);
	for(int i = 0 ; i < a ; i++){
	    if(arr[i]%2 ==0 && arr[i]%4!=0){
	        multy = multy * arr[i];
	    }
	}
    printf("multy = %d",multy);
    return 0;
}

