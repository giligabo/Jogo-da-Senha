#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int getResultado(int numero, int posicao, int *senha)
{

    int i = 0, result = -2;

    for(i = 0; i < 4; i++)
    {

        if(result != 1 || result == -1)
        {
            if(senha[i] == numero)
            {
                result = 0;
            }
        }

        if(result == 0 || result == -1)
        {
            if(senha[i] == numero && posicao == i)
            {
                result = 1;
            }
        }

        if(result != 0 && result != 1)
        {
            if(senha[i] != numero)
            {
                result = -1;
            }
        }
    }

    return result;
}

void gerarSenha(int senha[4])
{
    int i;

    srand(time(NULL));

    for(i = 0; i < 4; i++)
    {
        senha[i] = rand() % 9;
    }
}

int main()
{
    int i = 0, tentativa = 1, senha[4], senhaUsuario[4], resultado[4], resultadoFuncao = 0, auxResult = 0;

    printf("JOGO DA SENHA!\n  Voce tera 10 tentativas para acertar a senha de 4 digitos, boa sorte!\n");

    printf("\nTabela de resultados:\n");
    printf(" -1 pts para cada valor que nao fizer parte da senha.\n");
    printf("  0 pts para cada valor correto e na posicao errada.\n");
    printf("  1 pts para cada valor correto e na posicao correta.\n\n");
    printf("----------------------------------------------------------------------\n\n");

    gerarSenha(senha);

    while(tentativa < 10)
    {
        printf("> Tentativa atual: %i\n\n", tentativa);

        auxResult = 0;

        for(i = 0; i < 4; i++)
        {
            printf("Digite o %i numero: ", i+1);
            scanf("%i", &senhaUsuario[i]);
        }

        printf("\n-Tentativa:");
        for(i = 0; i < 4; i++)
        {
            printf(" %i ", senhaUsuario[i]);
        }

        for(i = 0; i < 4; i++)
        {
            resultado[i] = getResultado(senhaUsuario[i], i, senha);
        }

        printf("\n-Resultado:");
        for(i = 0; i < 4; i++)
        {
            printf(" %i ", resultado[i]);

            if(resultado[i] == 1)
            {
                auxResult++;
            }

        }

        if(auxResult == 4)
        {
            printf("\nParabens, voce acertou na %i tentativa!\n", tentativa);
            break;
        }
        else
        {
            tentativa++;
        }
        printf("\n\n");
    }

    if(tentativa == 10)
    {
        printf("\nSuas tentativas acabaram!\n\n");
    }

    return 0;
}
