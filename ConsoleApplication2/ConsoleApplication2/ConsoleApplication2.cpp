#include <stdio.h>
#include <stdarg.h>

void myprintf(const char* format, ...)
{
	va_list args;
	va_start(args, format);
	
	while(*format != '\0')
	{
		putchar(*format);
		if (*format != '%')
		{
			
			format++;
			
		}
		else
		{
			
			if (*format == 'd')
			{

				int d = va_arg(args, int);
				putchar(d);
			}

			else if (*format == 'c')
			{
				char c = va_arg(args, char);
				putchar(c);
			}

			else if (*format == 's')
			{
				char s = va_arg(args, int);
				putchar(s);
			}
		}
		
		
	}

	va_end(args);
}

int main(void)
{
	myprintf("Hello My Printf : %d, %c, %s", 10, 'H',  'Hell');
	return 0;
}