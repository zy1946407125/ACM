#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPrime(int n)
{
    /********* Begin *********/
    int i, j;
    j = sqrt(n);
    for (i = 2; i <= j; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i > j)
        return 1;

    /********* End *********/
}
int main()
{
    /********* Begin *********/
    int n, a[100], i, sum = 0, count = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) 
    {
        if (isPrime(i)==1)
        {
            sum = sum + i;
            count++;
        }
    }
    printf("%d,%d", count, sum);
    /********* End *********/
}