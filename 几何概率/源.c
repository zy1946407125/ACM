/*
�߳�Ϊ1������������ֱ��Ϊ1��Բ
*/


#include<stdio.h>
#include<stdlib.h>
double getRandData(int min, int max)  //���� (min,max)֮������������
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
	int n;//��Ͷ��������
	double count=0;//Ͷ����Բ�д�����
	scanf("%d", &n);
	//srand((int)time(0));   //�������������
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
