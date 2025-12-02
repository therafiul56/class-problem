#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];
    int word=0,inword = 0;
    fgets(str,sizeof(str),stdin);
    for(int i = 0 ; str[i]!= '\0' ; i++){
        if(str[i]==' '||str[i]=='\t'||str[i]=='\n'){
            inword=0;
        }
		else if(inword == 0){
			inword++;
			word++;
		}
    }
	printf("word = %d",word);
    return 0;
}
