#include "bsq.h"

int ft_atoi(char *str)
{
    int i;
    int sign;
    int number;

    i = 0;
    sign = 1;
    number = 0;
    while (str[i])
    {
        if (str[i] == '-')
        {
            sign = -1;
            i++;
        }
        if (str[i] < '0' || str[i] > '9')
            i++;
        if (str[i] >= '0' && str[i] <= '9')
        {
        number = number * 10 + str[i] - '0';
        i++;
        if (str[i] < '0' || str[i] > '9')
            return (number * sign);
        }
    }
    return (number * sign);
}
/*
int main(void)
{
    char *str = " igHI there. I think i did it.. fyuf-12fiu fiu34";
    printf("%d", ft_atoi(str));
    return (0);
}
*/