#include<stdio.h>
extern int *a;
main()
{
	foo();
	a[0] = 123456;
	baz();
}
