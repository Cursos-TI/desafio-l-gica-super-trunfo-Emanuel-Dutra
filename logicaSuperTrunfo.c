#include <stdio.h>

int main()
{
	char estado1;
	char codigo1[4];
	char nome_cidade1[50];
	int populacao1;
	float area1;
	float pib1;
	int pontos_turisticos1;

	char estado2;
	char codigo2[4];
	char nome_cidade2[50];
	int populacao2;
	float area2;
	float pib2;
	int pontos_turisticos2;

	// -------------CARTA 1 --------------
printf("\n");
printf("#### Seja bem vindo(a) ao mega trunfo da cidade ####\n");
printf("\n");

	printf("Digite os dados da carta 1 para comecarmos: \n");

		printf("Digite o nome do estado (insira somente 1 caractere): \n");
		scanf("%c", &estado1);

		printf("Digite o codigo da cidade (insira somente ate 4 caracteres): \n");
		scanf("%s", codigo1);

		printf("Digite o nome da cidade: \n");
		scanf("%s", nome_cidade1);

		printf("Digite a populacao da cidade: \n");
		scanf("%d", &populacao1);

		printf("Digite a area da cidade: \n");
		scanf("%f", &area1);

		printf("Digite o PIB da cidade: \n");
		scanf("%f", &pib1);

		printf("Digite o numero de pontos turisticos: \n");
		scanf("%d", &pontos_turisticos1);

printf("\n");
printf("\n");

	// -------------CARTA 2 --------------
	printf("Digite os dados da carta 2\n");

		printf("Digite o nome do estado (insira somente 1 caractere): \n");
		scanf(" %c", &estado2);

		printf("Digite o codigo da cidade (insira somente ate 4 caracteres): \n");
		scanf("%s", codigo2);

		printf("Digite o nome da cidade: \n");
		scanf("%s", nome_cidade2);

		printf("Digite a populacao da cidade: \n");
		scanf("%d", &populacao2);

		printf("Digite a area da cidade: \n");
		scanf("%f", &area2);

		printf("Digite o PIB da cidade: \n");
		scanf("%f", &pib2);

		printf("Digite o numero de pontos turisticos: \n");
		scanf("%d", &pontos_turisticos2);


	float densidade_populacional1 = (float) (populacao1 / area1);
	float pib_cap1 = (float) (pib1 / populacao1);

	float densidade_populacional2 = (float) (populacao2 / area2);
	float pib_cap2 = (float) (pib2/ populacao2);

// Utilizei o espaço para ter uma melhor visualização

printf("\n");
printf("\n");

// Informações finais das cartas 1

	printf("### Essas sao as informacoes da carta 1 ###\n");
		printf("Nome do estado: %c\n", estado1);
		printf("Codigo da cidade: %s\n", codigo1);
		printf("Nome da cidade: %s\n", nome_cidade1);
		printf("O numero de habitantes dessa cidade: %d\n", populacao1);
		printf("A area oculpada %.2f km2\n", area1);
		printf("O PIB da cidade e: %.2f\n", pib1);
		printf("O numero de pontos turisticos da cidadade e: %d\n", pontos_turisticos1);
		printf("densidade populacional: %.2f\n", densidade_populacional1);
		printf("PIB per capita: %.2f\n", pib_cap1);

printf("\n");
printf("\n");

		// Informações finais da carta 2

	printf("### Essas sao as informacoes da carta 2 ###\n");
		printf("Nome do estado: %c\n", estado2);
		printf("Codigo da cidade: %s\n", codigo2);
		printf("Nome da cidade: %s\n", nome_cidade2);
		printf("O numero de habitantes dessa cidade: %d\n", populacao2);
		printf("A area oculpada %.2f km2\n", area2);
		printf("O PIB da cidade e: %.2f\n", pib2);
		printf("O numero de pontos turisticos da cidadade e: %d\n", pontos_turisticos2);
		printf("densidade populacional: %.2f\n", densidade_populacional2);
		printf("PIB per capita: %.2f\n", pib_cap2);


printf("\n");
printf("\n");


		printf("Agora veremos qual carta trunfo possui a melhor pontuacao: \n");

        printf("############################################################\n")

	if (populacao1 + area1 + pib1 + pontos_turisticos1 > populacao2 + area2 + pib2 + pontos_turisticos2)
	{
		printf("A carta da cidade %s veceu, pois possui a pontuacao maior \n", nome_cidade1);
	}

	else
	{
		printf("A carta da cidade %s veceu, pois possui a pontuacao maior \n",nome_cidade2);
	}



return 0;

}