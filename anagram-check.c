#include <stdio.h>
#include <string.h>
//anagrams are the words which are of same length and can be rearranged into one another.
int anagram(char st[], char strr[])
{
    if (strlen(st) != strlen(strr))
    {
        return 0;
    }
    for (int i = 0; i < strlen(st); i++)
    {
        int k = 0;
        for (int j = 0; j < strlen(strr); j++)
        {
            if (st[i] == strr[j])
            {
                k = 1;
            }
        }
        if (k == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str1[] = "listen";
    char str2[] = "silent";

    if (anagram(str1, str2))
    {
        printf("yes it is anagram");
    }
    else
    {
        printf("not an anagram");
    }
    return 0;
}
