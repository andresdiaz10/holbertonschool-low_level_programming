#include "holberton.h"
/**
 * jack_bauer -  Print every minute of the day
 */
void jack_bauer(void)
{
	int hora;
	int minuto;

	for (hora = 0 ; hora < 24 ;)
	{
		for (minuto = 0 ; minuto < 60 ; minuto++)
		{
			_putchar(hora / 10 + '0');
			_putchar(hora % 10 + '0');
			_putchar(':');
			_putchar(minuto / 10 + '0');
			_putchar(minuto / 10 + '0');
			_putchar('\n');
			if (i == 59)
				j++;
		}
	}
}
