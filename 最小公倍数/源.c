#include<stdio.h>
int main()
{
    /********* Begin *********/
    int a, b, c=0;
    scanf("%d%d", &a, &b);
    int x = a * b;
    while (a % b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("���Լ����%d",b);
    printf("��С��������%d", x / b);
    /********* End *********/
}