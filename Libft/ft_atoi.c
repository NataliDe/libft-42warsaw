#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (sign == 1 && (res > 214748364 || (res == 214748364 && *str - '0' > 7)))
			return (2147483647);
		if (sign == -1 && (res > 214748364 || (res == 214748364 && *str - '0' > 8)))
			return (-2147483648);
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}