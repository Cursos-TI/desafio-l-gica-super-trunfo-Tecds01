
 #include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
   
     // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
   
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa
        // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        // Cadastro das Cartas:
        // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Criei uma estrutura com as caracteristicas de cada cidade que quero que apresente para cada cidade.
    struct pais{ 
     //cidade A01
          char cidadeA01[15];
          float populacaoA01;
          float areaA01;
          float pibA01;
          int ptA01; //pontos turisticos
    //cidade A02
          char cidadeA02[15];
          float populacaoA02;
          float areaA02;
          float pibA02;
          int ptA02; //pontos turisticos
    };
    
    int main(){
    // declarado uma variavel para a estrutura para ser associada com cada campo.
        struct pais e;
    //no scanf logo apos o % colocar a quantidade de caracteres seguido de [^\n] para ler todos os caracteres dessa string.
            printf("digite o nome do cidade: \n");
            scanf("%14[^\n]s", e.cidadeA01);
            fflush(stdin);
    
            printf("Qual é a ppopulação?: \n");
            scanf("%f", &e.populacaoA01);
            fflush(stdin);
    
            printf("Qual é a area?: \n");
            scanf("%f", &e.areaA01);
            fflush(stdin);
    
            printf("Qual é o PIB?: \n");
            scanf("%f", &e.pibA01);
            fflush(stdin);
    
            printf("Quantos Pontos turistico tem?: \n");
            scanf("%d", &e.ptA01);
           
            //Carta A02
            printf("digite o nome do cidade: \n");
            scanf(" %14[^\n]s", e.cidadeA02);
            fflush(stdin);
    
            printf("Qual é a ppopulação?: \n");
            scanf("%f", &e.populacaoA02);
            fflush(stdin);
    
            printf("Qual é a area?: \n");
            scanf("%f", &e.areaA02);
            fflush(stdin);
    
            printf("Qual é o PIB?: \n");
            scanf("%f", &e.pibA02);
            fflush(stdin);
    
            printf("Quantos Pontos turistico tem?: \n");
            scanf("%d", &e.ptA02);
            fflush(stdin);
    //Apresentar o resultado recolhido de cada questão e apresentar de forma organizada. 
            printf("Cidade A01: %s\n , População: %.2f\n , Area: %.2f\n , PIB: %.2f\n , Pontos Turistico: %d\n"
            , e.cidadeA01 , e.populacaoA01 , e.areaA01, e.pibA01 , e.ptA01);
            
            printf("\n\n");
    
            printf("Cidade A02: %s\n , População: %.2f\n , Area: %.2f\n , PIB: %.2f\n , Pontos Turistico: %d\n"
            , e.cidadeA02 , e.populacaoA02 , e.areaA02, e.pibA02 , e.ptA02);
            printf("\n\n\n");
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
        if (e.populacaoA01 > e.populacaoA02)
        {
            printf("Cidade A01 tem maior população!\n");
        } else
        {
            printf("Cidade A02 tem maior população!\n");
        }
        
        if (e.areaA01 > e.areaA02)
        {
            printf("A cidade A01 tem maior area.\n\n, A Cidade A01 GANHOU!\n (porque tem a maior area.)");
        }else
        {
            printf("A cidade A02 tem maior area.\n\n, A Cidade A02 GANHOU!!\n (porque tem a maior area.)");
        }
        
        
        
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
     return 0;
 }