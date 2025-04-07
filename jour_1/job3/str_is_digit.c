int str_is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            return 0;
        }
        str++;
    }
    return 1;
}
