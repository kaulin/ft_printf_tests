#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_printf(const char *source, ...);

int	main(void)
{
	char *str;

	str = "42";

	printf("printf return for \"\" is %d\n", printf(""));
	printf("%p\n", str);
	ft_printf("%p\n", str);
	printf("%u - %u\n", INT_MIN, -20000);
	ft_printf("%x - %X\n", INT_MAX, UINT_MAX);
	ft_printf("ALL YOUR BASE%c%s", '\n', "ARE BELONG TO US%%\n");
	ft_printf("The ideal number, as we all know, is %d%c", 42, '\n');
	ft_printf("Too many parameters%s", "!!!\n", 42, "BLACK HOLE!!!");
	ft_printf("Too few %s %s", "parameters\n");
	ft_printf("Wrong type %s\n", 42); 
	return (0);	
}