#include<stdio.h>
main()
{
	int a[2][3]={{1, 2, 3},
				 {4, 5, 6}};
	printf("%u\n", *a);
	printf("%u\n", (*a));
	printf("%u\n", (*a)+1);

}
