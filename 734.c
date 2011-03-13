#include<stdio.h>
main()
{
	char str1[]="Bombay";
	char str2[]="Pune";
	char *s1=str1,*s2=str2;	
	while(*s1++==*s2++)
		printf("%s\n",str1);
	printf("\n");
}
