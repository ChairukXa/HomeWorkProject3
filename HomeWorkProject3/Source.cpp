#include <stdio.h>
int main()
{
	int x, y, min;
	x = 1;
	y = 1;
	min = 0;
	while (x > 0)
	{
		y = 1;
		while ((x % y == 0) && (y <= 20))
		{
			if (y == 20)
			{
				min = x;
				break;
			}
			y++;
		}
		x++;
		if (min > 0)
		{
			break;
		}
	}
	printf("%d\n", min);
	return 0;
}