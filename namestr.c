#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);//only the first word will be considered.
    // gets(str); // to take the whole line as input.
    // scanf("%[^\n]s", str);//to take the whole line as input.
    printf("Your input was : %s", str);
    return 0;
}