#include<stdio.h>
int main()
{
	float celcius, fahrenheit;
	printf("enter temperature in calcius");
	scanf("%f", &celcius);
	
	fahrenheit=(celcius*9/5) +32;
	printf("temp in fahrenheit is %f", fahrenheit);
	return 0;	
}
