#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_printable("* %")); //1
	printf("%i\n", ft_str_is_printable("\n")); //0
	printf("%i\n", ft_str_is_printable("~+ da")); //1
	printf("%i\n", ft_str_is_printable("  ")); //1
	printf("%i\n", ft_str_is_printable("")); //1
	printf("%i\n", ft_str_is_printable("\t")); //0
	printf("%i\n", ft_str_is_printable("\b")); //0
	printf("%i\n", ft_str_is_printable("()")); //1
}
