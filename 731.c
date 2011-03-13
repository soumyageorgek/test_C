#include<stdio.h>
main()
{
	int a[]={10, 20, 30, 40, 50};
	int j=0;
	int *p;
	p=a;
	printf("%u\n", a);
	printf("%u\n\n", a+1);
	for(j=0;j<5;j++){
		//printf("%u\n", a);
		printf("%u\n", *p);
		p=a+j;
	}
		
}
