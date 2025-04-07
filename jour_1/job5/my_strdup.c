#include <stdlib.h>

char *my_strdup(const char *src)
{
    int len = 0;
    while (src[len] != '\0')
    {
        len++;
    }

    char *dup = (char *)malloc(len + 1);
    if (dup == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < len; i++)
    {
        dup[i] = src[i];
    }
    dup[len] = '\0';
    return dup;
}
