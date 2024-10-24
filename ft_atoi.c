
/*
Converts ASCII string to integer
- ignore whitespaces : ' ', '\n', '\t', '\r', '\f', '\v'
- sign : only one '+' or '-'
- char by char conversion
    result = result * 10 + str[i] - '0'
    ex : 1234
    result = 0 and str[i] = 1 => result = 0 * 10 + (49 - 48) = 0 + 1 = 1
    result = 1 and str[i] = 2 => result = 1 * 10 + (50 - 48) = 10 + 2 = 12
    result = 12 and str[i] = 3 => result = 12 * 10 + (51 - 49) = 120 + 3 = 123
    result = 123 and str[i] = 4 => result = 123 * 10 + (52 - 49) = 1230 + 4 = 1234
- return value = result * sign
*/

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    // skip over whitespaces
    i = 0;
    while (str[i] == ' ' || str[i] == '\n' || str [i] == '\t' ||
            str[i] == '\v' || str [i] == '\v' || str [i] == '\f')
        i++;
    // define sign - only one sign => if
    sign = 1;
    if (str[i] == '+' || str [i] == '-')
    {
        if (str [i] == '-')
            sign = -sign;
        i++;
    }
    // convert string to integer
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    // return coverted value
    return (result * sign);
}

