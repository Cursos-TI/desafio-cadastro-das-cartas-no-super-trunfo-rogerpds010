#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado;
    char codigodacarta [10];
    char nomedacidade [30];
    unsigned long int populacao;
    float areaemkm;
    float PIB;
    int pontosturisticos;
    
    char Estado;
    char Codigodacarta [10];
    char Nomedacidade [30];
    unsigned long int Populacao;
    float Areaemkm;
    float pIB;
    int Pontosturisticos;
    
    printf("Digite uma letra entre A a H para identificar o Estado:\n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta:\n");
    scanf(" %[^\n]", codigodacarta);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomedacidade);
    
    printf("Digite a população:\n");
    scanf(" %lu", &populacao);
    
    printf("digite a área em KM²:\n");
    scanf(" %f",&areaemkm);
    
    printf("digite o PIB:\n");
    scanf(" %f",&PIB);
    
    printf("digite o número de pontos turísticos:\n");
    scanf(" %d",&pontosturisticos);
    
    //cadatro da segunda carta 
    
    printf("\n");
    printf("Atenção!\nAgora vamos criar a segunda carta:\n");
    printf("\n");
    
    printf("Digite uma letra entre A a H para identificar o Estado:\n");
    scanf(" %c", &Estado);
    
    printf("Digite o código da carta:\n");
    scanf(" %[^\n]", Codigodacarta);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", Nomedacidade);
    
    printf("Digite a população:\n");
    scanf(" %lu", &Populacao);
    
    printf("digite a área em KM²:\n");
    scanf(" %f",&Areaemkm);
    
    printf("digite o PIB:\n");
    scanf(" %f",&pIB);
    
    printf("digite o número de pontos turísticos:\n");
    scanf(" %d",&Pontosturisticos);
    
    float pibpercapita = PIB / populacao;
    float densidade = populacao / areaemkm;
    float densidadepoder = areaemkm / populacao;
    
    float Pibpercapita = pIB / Populacao ;
    float Densidade = Populacao / Areaemkm;
    float Densidadepoder = Areaemkm / Populacao;
    
    float superpoder = populacao + areaemkm + PIB + pontosturisticos + pibpercapita + densidadepoder;
    float Superpoder = Populacao + Areaemkm + pIB + Pontosturisticos + Pibpercapita + Densidadepoder;
    
    printf("\nDADOS DA CARTA 01:\n");
    
    printf("Estado: %c\n",estado);
    printf("Código da carta: %s\n",codigodacarta);
    printf("Nome da cidade: %s\n",nomedacidade);
    printf("População: %lu\n",populacao);
    printf("Área: %.2f KM²\n",areaemkm);
    printf("PIB: %.2f bilhões de reais\n",PIB);
    printf("Números de pontos turísticos: %d\n",pontosturisticos);
    printf("Densidade populacional: %.2fhab/km²\n",densidade);
    printf("PIB per capita : %.2f reais\n",pibpercapita);
    printf("\n");
    
    printf("\nDADOS DA CARTA 02:\n");
    
    printf("Estado: %c\n",Estado);
    printf("Código da carta: %s\n",Codigodacarta);
    printf("Nome da cidade: %s\n",Nomedacidade);
    printf("População: %lu\n",Populacao);
    printf("Área: %.2f KM²\n",Areaemkm);
    printf("PIB: %.2f bilhões de reais\n",pIB);
    printf("Números de pontos turísticos: %d\n",Pontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n",Densidade);
    printf("PIB per capita : %.2f reais\n",Pibpercapita);
    printf("\n");
    
    printf("Comparação de Cartas:\n");
    
    printf("População: %d\n",populacao > Populacao);
    printf("Área: %d\n",areaemkm > Areaemkm);
    printf("PIB: %d\n",PIB > pIB);
    printf("Pontos Turísticos: %d\n",pontosturisticos > Pontosturisticos);
    printf("Densidade populacional: %d\n",densidade < Densidade);
    printf("PIB per capita: %d\n",pibpercapita > Pibpercapita);
    printf("Super Poder: %d\n",superpoder > Superpoder);
    
    return 0;
}
