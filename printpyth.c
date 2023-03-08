#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

int main() 
{
	  _printf("nuts");
}

int _putchar(char c)
{
	    return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
	int i = 0;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}
	//va_list valist;
        //va_start(valist, format);
	//va_arg(valist, int));
	//va_end(valist);
}
