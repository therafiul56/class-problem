#include <stdio.h>
void scnarr(int r, int c,int arr[r][c]){
    for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            scanf("%d",& (arr[i][j]));
        }
    }
}
void prntarr(int r, int c,int arr[r][c]){
    for(int i = 0 ; i<r ; i++){
            for(int j = 0 ; j<c ; j++){
                printf("%d ",(arr[i][j]));
            }
            if(r=c){
                printf("\n");
            }
        }
}
void chek(int r, int c,int arr[r][c],int brr[r][c]){
    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            arr[i][j] += brr[i][j];
                
        }
    }
}

int main() {
	int a,b;
  	printf("Input size of array: ");
	scanf("%d%d",&a,&b);
	int arr[a][b],brr[a][b];
 	printf("Input array elements of 1st array: \n");
    scnarr(a,b,arr);
    printf("Input array elements of 1st array: \n");
    scnarr(a,b,brr);
    chek(a,b,arr,brr);
    printf("The sum of array is: \n");
    prntarr(a,b,arr);
    
	return 0;

}

