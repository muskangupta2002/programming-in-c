#include <stdio.h>
#include <string.h>
void removeduplicate(char str1[])
{
    int i, j;
    i = j = 0;
    int len = strlen(str1);
    while (j < strlen(str1))
    {
        if (str1[j] == str1[j + 1])
        {
            j++;
        }
        else
        {
            str1[i] = str1[j];
            i++;
            j++;
        }
    }
    while (i < len)
    {
        str1[i] = '\n';
        i++;
    }

    return;
}

int main()
{

    char teststring[] = "tthississaassttrriinngg";
    removeduplicate(teststring);
    printf("%s", teststring);

    return 0;
}
