#include<stdio.h>
main()
{
	char **p;
	char *q;
	char r=92;

	q = &r;
	p = &q;
	printf("%u\n", p);
	printf("%u\n", p+1);
	printf("%u\n", *p);
	printf("%u\n", *p+1);
	printf("%u\n", **p);
}
