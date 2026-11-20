#include <stdio.h>
#include <string.h>

int firstUniqChar(char* s)
{
    int frequency[256] = {0};
    int length = (int)strlen(s);

    for (int i = 0; i < length; i++)
    {
        frequency[(unsigned char)s[i]]++;
    }

    for (int i = 0; i < length; i++)
    {
        if (frequency[(unsigned char)s[i]] == 1)
            return i;
    }

    return -1;
}

int main()
{
    char str[] = "loveleetcode";

    int result = firstUniqChar(str);

    printf("First Unique Character Index: %d\n", result);

    return 0;
}