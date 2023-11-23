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
	you = ft_printf("You: %c marks the spot!\n", 'X');
	exp = printf("Exp: %c marks the spot!\n", 'X');
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);
	
	puts("\%s Prints a string (as defined by the common C convention).");
	you = ft_printf("You: Hello %s World!\n", "Cruel");
	exp = printf("Exp: Hello %s World!\n", "Cruel");
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);
	
	puts("\%p The void * pointer argument has to be printed in hexadecimal format.");
	you = ft_printf("You: Your pointer is %p\n", &you);
	exp = printf("Exp: Your pointer is %p\n", &you);
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("\%d Prints a decimal (base 10) number.");
	you = ft_printf("You: Zero is %d\n", 0);
	exp = printf("Exp: Zero is %d\n", 0);
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("\%i Prints an integer in base 10.");
	you = ft_printf("You: 42 is %i\n", 42);
	exp = printf("Exp: 42 is %i\n", 42);
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("\%u Prints an unsigned decimal (base 10) number.");
	you = ft_printf("You: Max is %u\n", (0 - 1));
	exp = printf("Exp: Max is %u\n", (0 - 1));
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("\%x Prints a number in hexadecimal (base 16) lowercase format.");
	you = ft_printf("You: 42 is %x\n", 42);
	exp = printf("Exp: 42 is %x\n", 42);
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("\%X Prints a number in hexadecimal (base 16) uppercase format.");
	you = ft_printf("You: -666 is %X\n", -666);
	exp = printf("Exp: -666 is %X\n", -666);
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("\%\% Prints a percent sign.");
	you = ft_printf("You: 42%% is good enough!\n");
	exp = printf("Exp: 42%% is good enough!\n");
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("Multiple arguments 0123456789");
	you = ft_printf("You: %i12345%d789\n", 0, 6);
	exp = printf("Exp: %i12345%d789\n", 0, 6);
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("Empty string");
	you = ft_printf("");
	exp = printf("");
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

	puts("Null string with null pointer (segfaults)");
	you = ft_printf(NULL, NULL);
	exp = printf(NULL, NULL);
	if (you == exp)
		puts(GREEN "OK" NORMAL);
	else
		puts(RED "KO" NORMAL);

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