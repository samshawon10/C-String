#include <stdio.h>
int main()
{
    char str[100];
    int A = 0, E = 0, I = 0, O = 0, U = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
        {
            A++;
        }
        else if (str[i] == 'E' || str[i] == 'e')
        {
            E++;
        }
        else if (str[i] == 'I' || str[i] == 'i')
        {
            I++;
        }
        else if (str[i] == 'O' || str[i] == 'o')
        {
            O++;
        }
        else if (str[i] == 'U' || str[i] == 'u')
        {
            U++;
        }
    }
    printf("A/a: %d\n", A);
    printf("E/e: %d\n", E);
    printf("I/i: %d\n", I);
    printf("O/o: %d\n", O);
    printf("U/u: %d\n", U);

    return 0;
}