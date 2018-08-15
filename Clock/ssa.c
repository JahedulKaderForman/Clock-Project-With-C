#include<stdio.h>
#include<string.h>

int main(){

    char a[10000];
    while(gets(a)!=EOF){
        puts(strrev(a));
    }


return 0;
}
