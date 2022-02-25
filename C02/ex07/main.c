#include<stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char a[] = "he99LLo";
	char *b;

	b = a;
	printf("%s", ft_strupcase(b));
	return (0);
}
