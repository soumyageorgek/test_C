#include <stdio.h>
main()
{
	float i = 10;
	void *k;
	
	k = &i;
	printf("%f", *(float *)k);
}
