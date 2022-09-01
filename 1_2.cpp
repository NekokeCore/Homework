#include <stdio.h>
int main()
{
	int a, b, c, d;
	int max(int x, int y, int z);
	scanf_s("%d,%d,%d", &a, &b, &c,1);
	d = max(a, b, c);
	printf("max = %d\n", d);
	return 0;
}

int max(int x , int y ,int z)
{
	int e;
	if(x > y)
	{
		if (x > z)
		{
			e = x;
		}else
		{
			e = z;
		}
	}else
	{
		if (y > z)
		{
			e = y;
		}else
		{
			e = z;
		}
	}
	return (e);
}