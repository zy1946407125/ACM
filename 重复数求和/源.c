int sum(int base, int n)
{
    /********* Begin *********/


    /********* End *********/

}
#include<stdio.h>	
#include<math.h>
void main() {
    /********* Begin *********/
    int a, n, i, x=0;
    int sum = 0;
    scanf("%d%d", &a, &n);
    for (i = 0; i < n; i++)
    {
        x = x * 10+ a;
        //printf("第%d次：x=%d\n",i+1, x);
        sum = sum + x;
        //printf("第%d次：sum=%d\n",i+1,sum);
    }

    printf("%d", sum);

    /********* End *********/
}