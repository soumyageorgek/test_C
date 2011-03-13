#include<stdio.h>

struct xx{
	int x;
		//char name[]="hello";
};
main()
{
	struct xx *s;
	printf("%d\n", s->x);
	//printf("%s\n", s->name);	
}
