// Write a C program to find Palindrome Numbers

#include <stdio.h>

int isPalindrome(int x)
{
    int temp, reverseNum = 0;
    temp = x;
    while (temp)
    {
        reverseNum = reverseNum * 10 + temp % 10;
        temp /= 10;
    }
    if (reverseNum == x)
        return 1;
    return 0;
}

int main()
{
    int count = 10;
    while (1)
    {
        if (isPalindrome(count) == 1)
            printf("%d\n", count);
        count++;
    }
}