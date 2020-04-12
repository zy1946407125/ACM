/*
边长为1的正方形中套直径为1的圆
*/


#include<stdio.h>
#include<stdlib.h>
double getRandData(int min, int max)  //返回 (min,max)之间的随机浮点数
{
	double m1 = (double)(rand() % 101) / 101;
	min++; 
	double m2 = (double)((rand() % (max - min + 1)) + min);
	m2 = m2 - 1;
	return m1 + m2; 
}

int main()
{
	int i;
	double a, b, PI;
	int n;//总投掷次数；
	double count=0;//投掷在圆中次数；
	scanf("%d", &n);
	//srand((int)time(0));   //设置随机数种子
	for (i = 0; i < n; i++)
	{
		a = getRandData(-1, 1);
		b = getRandData(-1, 1);
		if (a * a + b * b < 1)
			count++;
	}
	PI = count / n / (0.5 * 0.5);
	printf("%f", PI);
}
