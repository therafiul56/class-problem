#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];
    int alphabet=0,digit=0 ,cha=0;
    fgets(str,sizeof(str),stdin);
    for(int i = 0 ; str[i]!= '\0' ; i++){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            alphabet++;
        }
        else if(str[i]>='0'&& str[i]<='9'){
            digit++;
        }
        else if(str[i]==' '){
            continue;
        }
        else{
            cha++;
        }
    }
	printf("alphabet = %d\ndigit = %d\ncharecter = %d",alphabet,digit,cha);
    return 0;
}
