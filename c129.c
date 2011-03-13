#include<stdio.h>
main()
{
	int p, i=0, j=0, k=2, l=3;
	p = i++ || j && k++ || l++;
	printf("%d %d %d %d %d", p, i, j, k, l); 
}
