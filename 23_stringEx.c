//
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="Viral";
    char s2[]="Vivek";
    char s3[54]=" is a friend of ";
    s1[54] = strcat(s1,s3);
    puts(strcat(s1,s2));
    
    return 0;
}