#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isPalindrome(char* s)
{
    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right)
    {
        while (left < right && !isalnum((unsigned char)s[left]))
            left++;

        while (left < right && !isalnum((unsigned char)s[right]))
            right--;

        if (tolower((unsigned char)s[left]) !=
            tolower((unsigned char)s[right]))
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    char str[] = "A man, a plan, a canal: Panama";

    bool result = isPalindrome(str);

    if (result)
        printf("Valid Palindrome: true\n");
    else
        printf("Valid Palindrome: false\n");

    return 0;
}