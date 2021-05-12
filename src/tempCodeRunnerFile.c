static void set_itoa(char *rt, int n, int size)
{
	if (n == 0)
	{
		rt[size] = n % 10;
	}
	else
	{
		set_itoa(rt, n / 10, size - 1);
	}
}