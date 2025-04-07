#include <stdlib.h>
#include <ctype.h>

int word_count(char *str)
{
    int count = 0;
    while (*str)
    {
        while (*str && isspace((unsigned char)*str))
            str++;
        if (*str)
        {
            count++;
            while (*str && !isspace((unsigned char)*str))
                str++;
        }
    }
    return count;
}

char **split(char *str)
{
    int words = word_count(str);
    char **result = (char **)malloc((words + 1) * sizeof(char *));
    if (result == NULL)
    {
        return NULL;
    }

    int i = 0;
    while (*str)
    {
        while (*str && isspace((unsigned char)*str))
            str++;
        if (*str)
        {
            char *start = str;
            while (*str && !isspace((unsigned char)*str))
                str++;

            int len = str - start;
            result[i] = (char *)malloc(len + 1);
            if (result[i] == NULL)
            {
                return NULL;
            }

            for (int j = 0; j < len; j++)
            {
                result[i][j] = start[j];
            }
            result[i][len] = '\0';
            i++;
        }
    }

    result[i] = NULL;
    return result;
}
