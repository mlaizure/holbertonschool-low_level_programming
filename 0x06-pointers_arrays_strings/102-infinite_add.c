char *get_last_digit(char *n)
{
	while (*n != '\0')
	{
		n++;
	}
	n--;
	return (n);
}

int add(char d1, char d2)
{
	int r;

	r = (d1 - '0') + (d2 - '0');
	return (r);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *cdn1;
	char *cdn2;
	int ret;
	int ra;
	int rd;

	cdn1 = get_last_digit(n1);
	cdn2 = get_last_digit(n2);
	ret = 0;

	while (cdn1 >= n1 && cdn2 >= n2)
	{
		ra = add(*cdn1, *cdn2);
		ra += ret;

		rd = ra % 10;
		ret = ra / 10;
		cdn1--;
		cdn2--;
	}

	if (cdn1 < n1 && cdn2 < n2)
	{
		if (ret != 0)
		{
			print_char(ret + '0');
		}
	}
	else if (cdn1 < n1)
	{
		while (cdn1 >= n2)
		{
			ra = ret + *cdn2;
			ret = ra / 10;
			rd = ra % 10;
			print_char(*cdn2);
			cdn2--;
		}
	}
	else (cdn1 >= n1)
	{
		while (cdn2 < n2)
		{
			ra = ret + *cdn1;
			ret = ra / 10;
			rd = ra % 10;
			print_char(*cdn1);
			cdn1--;
		}
	}
	if (ret != 0)
	{
		print_char(ret = '0');
	}
}
