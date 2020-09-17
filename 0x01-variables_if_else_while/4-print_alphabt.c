# include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * -You can only use the putchar function (every other function
 *  (printf, puts, etc) is forbidden)
 * -All your code should be in the main function
 * -You can only use putchar twice in your code
 * Return: 0
 */

int main(void)
{
	int letter;

	for (letter = 97; letter < 123; ++letter)
	{
		if (letter != 101 && letter != 113)
			putchar(letter);
	}
	putchar(10);
	return (0);
}
