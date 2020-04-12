int isValidISBN(char isbn[])
{
    /********* Begin *********/


    /********* End *********/
}
#include "stdio.h"
int main()
{
    /********* Begin *********/
    char str[10];
    int a[10];
    int i, sum = 0;
    for (i = 0; i < 10; i++)
        scanf("%c", &str[i]);
    for (i = 0; i < 9; i++)
    {
        a[i] = str[i] - 48;
        sum = sum + a[i] * (10 - i);
    }
    a[9] = str[9] - 48;
    if (sum % 11 == 0)
    {
        if (str[9] == '0')
            printf("Valid");
        else
            printf("Invalid");
    }
    else
    {
        if (a[9] != 40)
        {
            if (11 - sum % 11 == a[9])
                printf("Valid");
            else
                printf("Invalid");
        }
        else
        {
            if (11 - sum % 11 == 10)
                printf("Valid");
            else
                printf("Invalid");
        }
    }
    /********* End *********/
}