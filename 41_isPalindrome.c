#include <stdio.h>

int isPalindrome(int num)
{
    int reversed = 0;
    int original = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    if (original == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter any no.");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    return 0;
}