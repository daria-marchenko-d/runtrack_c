#include <stdlib.h>
#include <ctype.h>

char *trim(char *str)
{
    while (isspace((unsigned char)*str))
        str++;
    int len = 0;
    char *end = str;

    while (*end)
    {
        end++;
    }
    end--;

    while (end >= str && isspace((unsigned char)*end))
    {
        end--;
    }
    len = end - str + 1;

    char *result = (char *)malloc(len + 1);
    if (result == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < len; i++)
    {
        result[i] = str[i];
    }
    result[len] = '\0';

    return result;
}
