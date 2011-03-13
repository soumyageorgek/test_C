#include<stdio.h>
main()
{
	char **p;
	char *j;
	char k;
	
	j = &k;
	p = &j;
	printf("%u\n", p);
	printf("%u\n", p+1);
	printf("%u\n", *p);
	printf("%u\n", (*p)+1); 
}

