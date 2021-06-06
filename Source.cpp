#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main()
{
	unsigned int  n;

	printf("enter an integer: ");
	scanf("%u", &n);

	
	printf("the length of the longest sequence of ones is : %u", len(n)); 
	scanf("%u", len(n));

	return 0;
}