#include <stdio.h>
int main()
{
    char arr[] = "Sam Shawon";
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }
    // printf("%s",arr);
    printf("\n");

    printf("%d", n);
    return 0;
}