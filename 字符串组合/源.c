#include<string.h>
#include<stdio.h>
void sortName(char** arr, int size) {
    /********* Begin *********/
    int i, j;
    char s[50];
    for (i = 1; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {

            if (strcmp(arr[j],arr[j+1])>0)
            {
                strcpy(s, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], s);
            }
        }
    }
    for (i = 0; i < size; i++)
        puts(arr[i]);
    /********* End *********/

}
int  main() {
    /********* Begin *********/
    int n, i, lenth;
    char str[20][50];
    char* arr[20];
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        fgets(str[i], 50, stdin);
        arr[i] = str[i];
        lenth = strlen(arr[i]);
        arr[i][lenth - 1] = '\0';
    }
    printf("\n");
    sortName(arr, n);
    /********* End *********/
}


/*
5
Larry Page
Alan Turing
George Boole
Steve Wonizak
James Gosling
*/

/*
6
Anu Garg
Daniel M.lewin
Ian SOmmerville
Alan Turing
Julian Lobardi
Michael Stonebraker
*/