#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    puts("Enter First String");
    scanf("%[^\n]s", str);

    puts("The size of is :");
    // size
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    printf("%d\n", size);

   
    // reversing the First string.

    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];

        str[i] = temp;
        str[i] = str[j];
        str[j] = temp;
    }
     puts("The Reverse String is :");
     puts(str);

    return 0;
}