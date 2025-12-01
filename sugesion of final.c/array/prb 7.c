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
void chek(int r, int c,int arr[r][c],int brr[r][c],int mlty[r][c]){
    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            mlty[i][j]=0;
            for(int k = 0 ; k<r ; k++){
                mlty[i][j] += arr[i][k] * brr[k][j];
            }
                
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
    int mlty[a][b];
    chek(a,b,arr,brr,mlty);
    printf("The multy plition is :\n");
    prntarr(a,b,mlty);
    
	return 0;

}

