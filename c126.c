#include<stdio.h>
main()
{
	int i = 0, j = 2, k;

	k = i && ++j;
	printf("%d %d", k, j);	
}
