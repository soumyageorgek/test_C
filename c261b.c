int a[3] = {1, 2, 3};
int p = 1;
void foo()
{
	a[0] = &p;
}
void baz()
{
	printf("%d\n", p);
}
