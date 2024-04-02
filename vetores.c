#include <stdio.h>

int main()
{
    int vogais[5] = {0, 0, 0, 0, 0};
    char letra;

    do
    {
        printf("DIgite uma letra: ");
        scanf(" %c", &letra);
        switch (letra)
        {
        case 'a':
            vogais[0]++;
            break;
        case 'e':
            vogais[1]++;
            break;
        case 'i':
            vogais[2]++;
            break;
        case 'o':
            vogais[3]++;
            break;
        case 'u':
            vogais[4]++;
            break;
        }
    } while (letra != 'z');

    printf("Quantidade de cada vogal em ordem: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vogais[i]);
    }
    
    return 0;
}