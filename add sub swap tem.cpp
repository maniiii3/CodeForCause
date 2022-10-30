#include<stdio.h>

int main()
{
	int num1, num2, temp, *p, *q;
	
	printf("Enter number1: " );
	scanf("%d",&num1);
	printf("Enter number2: ");
	scanf("%d",&num2);
	
	printf("\n\nBefore swapping, first number = %d", num1);
	printf("\nBefore swapping, second number = %d\n", num2);
	
	
	p = &num1;
	q = &num2;
	
//	temp = *p;
//	*p = *q;
//	*q = temp;
	
	
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
	
	printf("\nAfter swaping, first number = %d", num1);
	printf("\nAfter swaping,Second number = %d", num2);
	
	return 0;
}
