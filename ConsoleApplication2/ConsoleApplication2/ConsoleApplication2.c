#include <stdio.h>
#include <stdarg.h>


void putNumber (int n)
{
	const int checkNegative = n & (1 << 31);
	if(checkNegative)
	{
		putchar('-');
		n -= 1;
		n = ~n;
	}
	
	int numString[16] = { 0 } ;
	int numCount = 0;
	
	while (n != 0)
	{
		int digit = n % 10;
		numString[numCount] = digit + '0';
		numCount++;
		n /= 10;
	} 

	for (int i = numCount - 1; i >= 0; i--)
	{
		putchar(numString[i]);
	}
}


void myprintf(const char* format, ...)
{
	va_list args;
	va_start(args, format);
	
	while(*format != '\0')
	{
		
		
		if (*format == '%')
		{
			
			
			format++;
			if (*format == '\0')
			{
				break;
			}
			
			if (*format == 'd')
			{
				int d = va_arg(args, int);
				putNumber(d);
				format++;
			}

			else if (*format == 'c')
			{
				char c = va_arg(args, char);
				putchar(c);
				format++;
			}
			
			else if (*format == 's')
			{
				char* s =  va_arg(args, char*) ;
				for (int i = 0; s[i] != '\0'; i++)
				{
					putchar(s[i]);
					
				}
				format++;
			}
		

		}
		
			
		putchar(*format);
		format++;
		
		
		
	}

	va_end(args);
}

int main(void)
{
	myprintf("Hello My Printf : %d, %c, %s", -40, 'H', "Hello");
	return 0;
}