#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese"); // mudar depois hehehe

    int opcao;
    printf("Bem vindo a mais um software da Baianor Soluctions"); 
    printf("\n\nEscolha o tipo de concreto desejado entre as opções abaixo"); 
    printf("\n1 - soon..."); 
    printf("\n2 - soon..."); 
    printf("\n3 - soon..."); 
    printf("\n4 - soon...");
    printf("\n5 - Cacetada"); 
    scanf("%d", opcao);

    int num;
                switch (num)// Seleção do Menu
                 {
                        case 1:
                               printf("OBRIGADO\n\n");
                               system("EXIT");
                        break;
                        case 2:
                               printf("OBRIGADO\n\n");
                               system("EXIT");
                        break;
                        
                        case 3:
                               printf("OBRIGADO\n\n");
                               system("EXIT");
                        break;
                        case 4:
                               printf("OBRIGADO\n\n");
                               system("EXIT");
                        break;
                        case 5:
                               printf("OBRIGADO\n\n");
                               system("EXIT");
                        break;
                        default:
                                printf("ok\n");
                                } 
}