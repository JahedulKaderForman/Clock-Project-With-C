#include<stdio.h>
#include<string.h>

int main()
{
    int a,i=1,f;
    char b[10],c[8]="Hajj";
    gets(b);
    f=strlen(c);
    while(f==strlen(b)&& strcmp(b,c)==0){
        i++;
        printf("%s",b);
        if(i>=2)
            break;
    }
}
