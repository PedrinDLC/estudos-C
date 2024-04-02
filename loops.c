#include <stdio.h>

/*
int main()
{
    int num, maior = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
        }
    }

    printf("O maior numero digitado foi: %d", maior);
    return 0;
}
*/

/*
int main()
{
    float salario, soma, media, maior;
    maior = soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o salario do funcionario: R$");
        scanf("%f", &salario);
        soma += salario;
        if(salario > maior){
            maior = salario;
        }
    }

    media = soma / 10;

    printf("Media salarial: R$%.2f\n", media);
    printf("Maior salario: R$%.2f", maior);

    return 0;
}
*/

/*
int main()
{
    float nota1, nota2, nota3, media;

    for (int i = 0; i < 40; i++)
    {
        printf("Informe a nota 1 do aluno: ");
        scanf("%f", &nota1);
        printf("Informe a nota 2 do aluno: ");
        scanf("%f", &nota2);
        printf("Informe a nota 3 do aluno: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("Media = %.2f\n", media);

        if(media >= 7){
            printf("Aprovado!\n");
        } else{
            printf("Reprovado!\n");
        }
    }
    return 0;
}
*/

/*
int main()
{
    float reajuste, salario, salarioreaj, maiorsal;

    maiorsal = 0;

    printf("Percentual de ajuste salarial: ");
    scanf("%f", &reajuste);

    for (int i = 0; i < 6; i++)
    {
        printf("Informe o salario do funcionario: R$");
        scanf("%f", &salario);
        salarioreaj = salario + (salario * reajuste / 100);
        printf("O salario reajustado e : R$%.2f\n", salarioreaj);
        if (salarioreaj > maiorsal)
        {
            maiorsal = salarioreaj;
        }
    }
    printf("O maior salario reajustado e R$%.2f\n", maiorsal);
    return 0;
}
*/

int main()
{
    int n, num, somapar, somaimpar;
    somapar = somaimpar = 0;
    printf("Digite a quantidade de numeros da lista: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            somapar += num;
        }
        else
        {
            somaimpar += num;
        }
    }

    printf("Soma dos numeros pares = %d\n", somapar);
    printf("Soma dos numeros impares = %d\n", somaimpar);

    return 0;
}