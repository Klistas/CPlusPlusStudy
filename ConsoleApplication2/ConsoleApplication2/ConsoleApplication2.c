#include <stdio.h>
#include <stdarg.h>

void myprintf(const char* format, ...)
{
	va_list args;
	va_start(args, format);
	int d[1000];
	while(*format != '\0')
	{
		putchar(*format);
		
		if (*format == '%')
		{
			
			format++;
			
			
			if (*format == 'd')
			{
				int count = va_arg(args, int);
				putchar(d[count]);
			}

			else if (*format == 'c')
			{
				char c = va_arg(args, char);
				putchar(c);
			}

			else if (*format == 's')
			{
				const char *s =  va_arg(args, const char*) ;
				putchar(*s);
			}
			

		}
		
			
		format++;
		
		
		
	}

	va_end(args);
}

int main(void)
{
	myprintf("Hello My Printf : %d, %c, %s", 40, 'H', "Hello");
	return 0;
}