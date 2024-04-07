#include <stdio.h>

int main()
{
    float saq, dep, saldo = 0;
    int op;

    do
    {
        printf("=================================\n");
        printf("|          BANCO DLC            |\n");
        printf("=================================\n");
        printf("Selecione uma opcao: \n");
        printf("[1] - Saldo\n");
        printf("[2] - Sacar\n");
        printf("[3] - Depositar\n");
        printf("[4] - Sair\n");
        printf("=================================\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Saldo: R$%.2f\n", saldo);
            break;

        case 2:
            printf("Informe o valor do saque: \nR$");
            scanf("%f", &saq);
            if (saq > 0)
            {
                if (saq > saldo)
                {
                    printf("Saldo Insuficiente!\n");
                }
                else
                {
                    saldo = saldo - saq;
                    printf("Saque realizado com sucesso!\n");
                }
            }
            else
            {
                printf("Valor invalido!\n");
            }
            break;

        case 3:
            printf("Informe o valor do deposito: \nR$");
            scanf("%f", &dep);
            if (dep <= 0)
            {
                printf("Valor invalido!\n");
            }
            else
            {
                saldo = saldo + dep;
                printf("Valor depositado com sucesso\n");
            }
            break;

        case 4:
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente!\n");
            break;
        }
        system("pause\n");
        system("cls");
    } while (op != 4);

    return 0;
}