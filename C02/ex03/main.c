#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_numeric("0123")); //1
	printf("%i\n", ft_str_is_numeric("  ")); //0
	printf("%i\n", ft_str_is_numeric("")); //1
	printf("%i\n", ft_str_is_numeric("876a528")); //0
	printf("%i\n", ft_str_is_numeric("3472*")); //0
	printf("%i\n", ft_str_is_numeric("324 234")); //0
	return (0);
}
