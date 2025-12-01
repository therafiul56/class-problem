#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];
    int vlcnt = 0, cstcnt = 0;
    scanf("%s",str);
    for(int i = 0 ; str[i]!= '\0' ; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vlcnt++;
        }
        else {
            cstcnt++;
        }
    }
	printf("vowl = %d \nconsonent = %d",vlcnt,cstcnt);
    return 0;
}
