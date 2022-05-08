#include <stdio.h>
int main()
{
	float celsius=0, fahrenheit;
fahrenheit=(9/5 celsius) + 32;

	printf("%f celsius=%f fahrenheit", celsius, fahrenheit);
celsius=(5/9 fahrenheit)-32;
	printf("%f fahrenheit=%f celsius", fahrenheit,celsius);
	return 0;
}