nclude <stdio.h>

/**
 * main - prints numbers between 0 to 9 qnd letters between a to f.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
