//Palindrome String Checker
#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="madam";
    int n=strlen(s), flag=1;

    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-1-i])
            flag=0;

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}