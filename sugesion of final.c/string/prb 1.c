#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%s",str);
    for(int i = 0 ; str[i]!= '\0' ; i++){
        str[i] = toupper(str[i]);
    }
	printf("%s",str);
    return 0;
}
