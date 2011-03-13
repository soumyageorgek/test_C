#include<stdio.h>
main()
{
	int p = 2;
	int *i, *j, k;
	i = &p;
	j = &p;
	k = *i/ *j;	
	printf("%d\n", k);
}
