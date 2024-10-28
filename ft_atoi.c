
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

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    int	i;
    int	sign;
    int	result;

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

int	main(void)
{
	// Test 1
	char	string1[] = " 		  -+1234abc567";
	printf("\nTest 1 \nString : %s\n", string1);
	printf("ft_atoi | Number : %d\n", ft_atoi(string1));
	printf("atoi    | Number : %d\n", atoi(string1));
	// Test 2
	char	string2[] = " 		  -2147483648abc567";
	printf("\nTest 2 \nString : %s\n", string2);
	printf("ft_atoi | Number : %d\n", ft_atoi(string2));
	printf("atoi    | Number : %d\n", atoi(string2));
	// Test 3
	char	string3[] = " 		  +2147483647abc567";
	printf("\nTest 3 \nString : %s\n", string3);
	printf("ft_atoi | Number : %d\n", ft_atoi(string3));
	printf("atoi    | Number : %d\n\n", atoi(string3));
	return (0);
}

