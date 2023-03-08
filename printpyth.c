#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);

int main() 
{
	int nuts = 5;
	_printf("there's %i nuts", nuts);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

int _printf(const char *format, ...)
{
	int i = 0;

	va_list valist;
	va_start(valist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if(format[i] == 'i')
			{
				printf(va_arg(valist, int));
				//_putchar(va_arg(valist, int));
				//puts(va_arg(valist, int));
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(valist);
}
