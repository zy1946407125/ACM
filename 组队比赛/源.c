#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int x1, x2, x3;
	int min;
	x1 = abs((a + b) - (c + d));
	x2 = abs((a + c) - (b + d));
	x3 = abs((a + d) - (b + c));
	//printf("%d %d %d", x1, x2, x3);
	min = (x1 < x2 ? x1 : x2);
	min = (min < x3 ? min: x3);
	printf("%d", min);
}