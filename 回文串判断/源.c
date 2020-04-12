#include <stdio.h>
#include<string.h>
int  isPalindrome(char* str)
{
    /********* Begin *********/


    /********* End *********/
}

int main()
{
    /********* Begin *********/
    int i;
    char str[100];
    scanf("%s", str);
    int lenth = strlen(str);
    int j = lenth - 1;
    for (i = 0; i < lenth; i++, j--)
    {
        if (str[i] != str[j])
            break;
    }
    if (i > j)
        printf("Yes");
    else printf("No");

    /********* End *********/
}