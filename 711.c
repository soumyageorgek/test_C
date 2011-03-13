#include<stdio.h>
main()
{
	int a[]={10, 20, 30, 40, 50};
	char *p;

	p = (char *)a;
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+16));
	printf("%d\n", *((int *)p+4));
}
