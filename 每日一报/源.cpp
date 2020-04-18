#include <iostream>
#include <algorithm>
using namespace std;
struct student
{
	int data;
	int num;
	double temperature;
};
bool compare(struct student a, struct student b )
{
	if (a.data == b.data)
	{
		if (a.temperature == b.temperature)
			return a.num < b.num;
		else
			return a.temperature > b.temperature;
	}
	else
		return a.data > b.data;
}
int main()
{
	int n, m, i, j = 0;
	int date[102], num[102];
	double temperature[102];
	struct student s[102];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %lf", &date[i], &num[i], &temperature[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (temperature[i] >= 38)
		{
			s[j].data = date[i];
			s[j].num = num[i];
			s[j].temperature = temperature[i];
			j++;
		}
	}
	printf("%d\n",j);
	sort(s, s + j, compare);
	for (i = 0; i < j; i++)
		printf("%d %d %.1f\n", s[i].data, s[i].num, s[i].temperature);


}

/*

5
20200229 17122490 37.0
20200301 17122490 38.4
20200229 17122640 39.0
20200301 17122640 38.4
20200301 16122138 38.1
*/