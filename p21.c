#include<stdio.h>
main()
{
	int const *p = 5;
	printf("%d", ++(*p));	
}
