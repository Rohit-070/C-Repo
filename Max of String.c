#include<stdio.h>
int main()
{
    char s[104];
    scanf("%[^\n]s",s);
    getchar();
    char c=s[0];
    for(int i=0;s[i]!=0;i++)
    {
        if(c<s[i])
        {
            c=s[i];
        }
    }
    printf("%c",c);
}