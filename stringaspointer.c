#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Computer Science";
    char *ptr = &str[0];
    printf("%p",ptr);
    return 0;
}
