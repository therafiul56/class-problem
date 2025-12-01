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
void chek(int r, int c,int arr[r][c],int k){
    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            arr[i][j] *= k;
        }
    }
}

int main() {
	int a,b;
  	printf("Input row and call of array: ");
	scanf("%d%d",&a,&b);
	int arr[a][b];
 	printf("Input array elements of 1st array: \n");
    scnarr(a,b,arr);
    printf("enter a digit to multiply : ");
    int c;
    scanf("%d",&c);
    chek(a,b,arr,c);
    prntarr(a,b,arr);
    
	return 0;

}
