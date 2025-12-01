#include <stdio.h>
#include<string.h>
int pal(char str[],int len){
    for(int i = 0,j=len-1; i<j ;j--, i++){
        if(str[i]!=str[j]){
            return 0;
        }
        
    }
    return 1;
}
int main() {
    char str[1000];
    int cunt = 0;
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    
    if(pal(str,len)){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
