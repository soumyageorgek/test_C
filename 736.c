#include<stdio.h>
main()
{
	char s[]="iKangadevi";
	char t[25];
	char *ps = s, *pt = t;

	while(*ps)
		*(pt++) = *(ps++);
	*pt = '\0';
	printf("%s\n",t);
}
