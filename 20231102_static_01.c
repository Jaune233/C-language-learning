void miku()
{
	static int a = 1;
	a++;
	printf("%d", a);
}


int main()
{
	int i = 0;
	while (i < 10)
	{
		miku();
		i++;
	}

	return 0;
}