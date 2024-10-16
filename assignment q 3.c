#include<stdio.h>
#include<conio.h>
int main(){
	float fahrenheit,calcius;
	printf("temp in fahrenheit:");
	scanf("%f",&fahrenheit);
	calcius=(fahrenheit-32)* 5/9 ;
	printf("temp in calcius is %2f",calcius);
	getch();
}
