#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_uppercase("Agf")); //0
	printf("%i\n", ft_str_is_uppercase("PPP213")); //0
	printf("%i\n", ft_str_is_uppercase("HELLO")); //1
	printf("%i\n", ft_str_is_uppercase("sf sd")); //0
	printf("%i\n", ft_str_is_uppercase("J J")); //0
	printf("%i\n", ft_str_is_uppercase("JJ8")); //0
}
