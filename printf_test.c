#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define MAGENTA "\x1B[35m"
#define BOLD "\x1B[1m"
#define NORMAL "\x1B[0m"

#include <stdio.h>

int	ft_printf(const char *str, ...);

int	main(void)
{
	int	you;
	int exp;

	puts(BOLD "Testing PRINTF" NORMAL);

	puts("\%c Prints a single character.");
	printf("You: ");
	you = ft_printf("%c marks the spot!", 'X');
	printf("\nExp: ");
	exp = printf("%c marks the spot!", 'X');
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);
	
	puts("\%s Prints a string (as defined by the common C convention).");
	printf("You: ");
	you = ft_printf("Hello %s World!", "Cruel");
	printf("\nExp: ");
	exp = printf("Hello %s World!", "Cruel");
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);
	
	puts("\%p The void * pointer argument has to be printed in hexadecimal format.");
	printf("You: ");
	you = ft_printf("Your pointer is %p", &you);
	printf("\nExp: ");
	exp = printf("Your pointer is %p", &you);
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("\%d Prints a decimal (base 10) number.");
	printf("You: ");
	you = ft_printf("Zero is %d", 0.0);
	printf("\nExp: ");
	exp = printf("Zero is %d", 0);
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("\%i Prints an integer in base 10.");
	printf("You: ");
	you = ft_printf("Zero is %i", 0);
	printf("\nExp: ");
	exp = printf("Zero is %i", 0);
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("\%u Prints an unsigned decimal (base 10) number.");
	printf("You: ");
	you = ft_printf("Max is %u", (0 - 1));
	printf("\nExp: ");
	exp = printf("Max is %u", (0 - 1));
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("\%x Prints a number in hexadecimal (base 16) lowercase format.");
	printf("You: ");
	you = ft_printf("Zero is %i", 0);
	printf("\nExp: ");
	exp = printf("Zero is %i", 0);
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("\%X Prints a number in hexadecimal (base 16) uppercase format.");
	printf("You: ");
	you = ft_printf("Zero is %i", 0);
	printf("\nExp: ");
	exp = printf("Zero is %i", 0);
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("\%\% Prints a percent sign.");
	printf("You: ");
	you = ft_printf("42%% is good enough!");
	printf("\nExp: ");
	exp = printf("42%% is good enough!");
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("Multiple arguments 0123456789");
	printf("You: ");
	you = ft_printf("%i12345%d789", 0, 6);
	printf("\nExp: ");
	exp = printf("%i12345%d789", 0, 6);
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("Empty string");
	printf("You: ");
	you = ft_printf("");
	printf("\nExp: ");
	exp = printf("");
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	puts("Null string with null pointer");
	printf("You: ");
	you = ft_printf(NULL, NULL);
	printf("\nExp: ");
	exp = printf(NULL, NULL);
	if (you == exp)
		printf(GREEN "\nOK\n" NORMAL);
	else
		printf(RED "\nKO\n" NORMAL);

	return(0);
}

/*
You have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/