#include<stdio.h>
main()
{
	int arr[5],i=2;
	
	while(i<5)
		arr[i] = ++i;	
	for(i=0; i<5; i++)
		printf("%d\n",arr[i]);
	printf("\n");
}
