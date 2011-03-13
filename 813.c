#include<stdio.h>
main()
{
	int size, i;
	scanf("%u",&size);	
	int arr[size];	
	for(i=1; i<=size; i++){
		scanf("%u", &(arr[i]));
		printf("%u", arr[i]);
	} 
}
