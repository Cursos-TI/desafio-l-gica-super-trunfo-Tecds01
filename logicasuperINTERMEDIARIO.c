
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//nesta versão, reaproveitamos o cadastro jaá feito e vamos implementar um MENU.
    //Criei uma estrutura com as caracteristicas de cada cidade que quero que apresente para cada cidade.
    struct pais{ 
        //cidade A01
             char cidadeA01[15];
             float populacaoA01;
             float areaA01;
             float pibA01;
             int ptA01; //pontos turisticos
             float densidade_Popa01;   //: População dividida pela área da cidade.
             float pib_p_capa01;        //PIB total dividido pela população.
             float super_podera01;
       
       //cidade A02
             char cidadeA02[15];
             float populacaoA02;
             float areaA02;
             float pibA02;
             int ptA02; //pontos turisticos
             float Densidade_Popa02;   //: População dividida pela área da cidade.
             float PIB_p_capa02;        //PIB total dividido pela população.
             float super_podera02;
       };       
    
    int main(){
    // declarado uma variavel para a estrutura para ser associada com cada campo.
        struct pais e;
    // aqui estou declarando variaveis para usar com o switch.
        int jogador1, jogador2;
        int menu1, menu2, regras;

        printf("Menu Principal.\n");
        printf("1. Iniciar Jogo.\n");
        printf("2. Ver Regras.\n");
        printf("3. Sair.\n");
        scanf("%d", &menu1);
   
   switch (menu1)
   {
   case 1:
        printf("## INICIO DE JOGO. ##\n");
        printf("\n\n");

        //no scanf logo apos o % colocar a quantidade de caracteres seguido de [^\n] para ler todos os caracteres dessa string.
            printf("digite o nome do cidade: \n");
            scanf(" %14[^\n]s", e.cidadeA01);
            fflush(stdin);
    
            printf("Qual é a ppopulação?: \n");
            scanf(" %f", &e.populacaoA01);
            fflush(stdin);
    
            printf("Qual é a area?: \n");
            scanf(" %f", &e.areaA01);
            fflush(stdin);
    
            printf("Qual é o PIB?: \n");
            scanf(" %f", &e.pibA01);
            fflush(stdin);
    
            printf("Quantos Pontos turistico tem?: \n");
            scanf(" %d", &e.ptA01);
           
            //Carta A02
            printf("digite o nome do cidade: \n");
            scanf(" %14[^\n]s", e.cidadeA02);
            fflush(stdin);
    
            printf("Qual é a ppopulação?: \n");
            scanf(" %f", &e.populacaoA02);
            fflush(stdin);
    
            printf("Qual é a area?: \n");
            scanf(" %f", &e.areaA02);
            fflush(stdin);
    
            printf("Qual é o PIB?: \n");
            scanf(" %f", &e.pibA02);
            fflush(stdin);
    
            printf("Quantos Pontos turistico tem?: \n");
            scanf(" %d", &e.ptA02);
            fflush(stdin);

            //carta A01 nivel intermediario. 
    e.densidade_Popa01 = e.populacaoA01 / e.areaA01;
    e.pib_p_capa01 = e.pibA01 / e.populacaoA01;

//carta A02 nivel intermediario.
    e.Densidade_Popa02 = e.populacaoA02 / e.areaA02;
    e.PIB_p_capa02 = e.pibA02 / e.populacaoA02;

//carta A01 nivel mestre.
    e.super_podera01 = e.populacaoA01 + e.areaA01 + e.pibA01 + e.ptA01 + e.pib_p_capa01;

// carta A02 nivel mestre.
    e.super_podera02 = e.populacaoA02 + e.areaA02 + e.pibA02 + e.ptA02 + e.PIB_p_capa02;

    printf("\n\n");
//Apresentar o resultado recolhido de cada questão e apresentar de forma organizada. 
printf("Cidade A01: %s\n , População: %.2f\n , Area: %.2f\n , PIB: %.2f\n , Pontos Turistico: %d\n , Densidade Populacional: %.2f\n , PIB per capita: %.2f\n"
    , e.cidadeA01 , e.populacaoA01 , e.areaA01, e.pibA01 , e.ptA01 , e.densidade_Popa01 , e.pib_p_capa01);
    
    printf("\n\n");

    printf("Cidade A02: %s\n , População: %.2f\n , Area: %.2f\n , PIB: %.2f\n , Pontos Turistico: %d\n , Densidade Populacional: %.2f\n , PIB per capita: %.2f\n"
    , e.cidadeA02 , e.populacaoA02 , e.areaA02, e.pibA02 , e.ptA02 , e.Densidade_Popa02 , e.PIB_p_capa02);

    printf("\n\n");

//Apartir daqui, vamos criar um segundo menu dentro do case 1, para que o jogador possa eslher o atributo a ser comparado.!!
            printf("Escolha qual caracteristica você quer comparar!!.\n");
            printf("1. População.\n");
            printf("2. Area.\n");
            printf("3. PIB.\n");
            printf("4. PONTOS TURISTICO.\n");
            printf("5. DENSIDADE DEMOGRAFICA.\n");
            printf("6. PIB PER CAPTA.\n");
            printf("7. SUPER PODER.\n");
            scanf("%d", &menu2);

                    switch (menu2)
                    {
                    // nesta opção vamos fazer a comparação de cada caracteristica e mostra na tela o Ganhador de acordo com a esolha do usuario.
                    case 1:
                    if(e.populacaoA01 == e.populacaoA02)
                    {
                        printf("Jogo EMPATOU!!.\n");
                    } else if(e.populacaoA01 > e.populacaoA02)
                    {
                        printf("População: Jogador 1 venceu.\n");
                    } else
                    {
                        printf("População: Jogador 2 venceu.\n");
                    }
                        break;

                    case 2:
                    if(e.areaA01 == e.areaA02)
                    {
                        printf("Jogo EMPATOU!!.\n");
                    } else if(e.areaA01 > e.areaA02)
                    {
                        printf("Jogador 1 venceu.\n");
                    } else
                    {
                        printf("Jogador 2 venceu.\n");
                    }
                        break;

                    case 3:
                    if(e.pibA01 == e.pibA02)
                    {
                        printf("Jogo EMPATOU!!.\n");
                    } else if(e.pibA01 > e.pibA02)
                    {
                        printf("Jogador 1 venceu.\n");
                    } else
                    {
                        printf("Jogador 2 venceu.\n");
                    }
                        break;

                    case 4:
                    if(e.ptA01== e.ptA02)
                    {
                        printf("Jogo EMPATOU!!.\n");
                    } else if(e.ptA01 > e.ptA02)
                    {
                        printf("Jogador 1 venceu.\n");
                    } else
                    {
                        printf("Jogador 2 venceu.\n");
                    }
                        break;

                    case 5:
                    if(e.densidade_Popa01== e.Densidade_Popa02)
                    {
                        printf("Jogo EMPATOU!!.\n");
                    } else if(e.densidade_Popa01 < e.Densidade_Popa02)
                    {
                        printf("Jogador 1 venceu.\n");
                    } else
                    {
                        printf("Jogador 2 venceu.\n");
                    }
                        break;
                    
                    case 6:
                    if(e.pib_p_capa01== e.PIB_p_capa02)
                    {
                        printf("Jogo EMPATOU!!.\n");
                    } else if(e.pib_p_capa01 > e.PIB_p_capa02)
                    {
                        printf("Jogador 1 venceu.\n");
                    } else
                    {
                        printf("Jogador 2 venceu.\n");
                    }
                        break;

                    case 7:
                    if(e.super_podera01== e.super_podera02)
                    {
                        printf("Jogo EMPATOU!!.\n");
                    } else if(e.super_podera01 > e.super_podera02)
                    {
                        printf("Jogador 1 venceu.\n");
                    } else
                    {
                        printf("Jogador 2 venceu.\n");
                    }
                        break;
                    default:
                        printf("Opção Invalida!\n");
                        break;
                    }
 break;
   case 2:
        printf("## As Regras São: ##\n");
        printf("\n\n");
        printf("1. CADA JOGADOR DEVE ESCOLHER UMA CIDADE INFORMAR SUAS CARACTERISTICAS. ex(POPULAÇÃO, AREA...)\n");
        printf("2.APÓS OS DOIS JOGADORES ESCOLHES SUAS CIDADES. UM JOGADOR DEVE ESCOLHER QUAL CARACTERISTICA SERÁ COMPARADA\n");
        printf("3.A CIDADE COM O VALOR MAIOR DA CARACTERISTICA GANHA!\n");
        printf("## EXCETO PARA DENSIDADE DEMOGRAFICA. NESTE CASO A CIDADE COM MENOR VALOR GANHA!! ##\n");
    break;

    case 3:
        printf("SAINDO DO JOGO!");
        break;
   default:
            printf("Opção Invalida!\n");
    break;
   }
}