#include<stdio.h>
void foo(int j)
{
	static int i;/*notice scope of static and 
                      initialisation to zero done automatically*/
	i++;
	if (j==9)
		printf("%d\n", i);
}
main()
{
	int i;
	for (i=0; i<10; i++)
		foo(i);	
}
