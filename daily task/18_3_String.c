#include <stdio.h>
#include <string.h>
int main() {
    int i,len=0,x,z=0;
    char str[15],a[15];

    scanf("%s",str);
    len=strlen(str);
    x=len;
    for(i=0;i<len;i++){
        (i%2==0)a[i]=str[z++]:a[i]=str[--x];
    }
    a[i]='\0';

    printf("%s",a);
    return 0;
}
/*
abcdef
afbecd
*/