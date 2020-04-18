#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, j = 0;
	int a[100002];
	double sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		a[i] = a[i] - i;
	}
	for (i = 0; i < n; i++)
		sum = sum + a[i];
	printf("%.0f", sum);

}