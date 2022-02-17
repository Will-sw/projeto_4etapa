#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void estados();
void escrevalinha();
void escrevalinha2();
void apresentar_mapa();
void nome_brazil();
void dados();
void AC();
void AL();
void AP();
void AM();
void BA();
void CE();
void ES();
void GO();
void MA();
void MT();
void MS();
void MG();
void PA();
void PB();
void PR();
void PE();
void PI();
void RJ();
void RN();
void RS();
void RO();
void RR();
void SC();
void SP();
void SE();
void TO();
void DF();
void regioes();
void quiz();
char nome[20];
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int resp, op, esc, x = 0;

  while (x <= 100)
  {
    system("cls");
    printf("\nDownload...%i\n", x);
    x = x + 20;
    sleep(2);
    system("cls");
  }

  escrevalinha();
  printf("\nDigite seu nome: ");
  scanf("%[^\n]s", &nome);
  escrevalinha();

  system("cls");

  printf("\n\nOla,seja bem vindo %s, aqui voce ira aprender mais sobre o Brasil\n e seus estados.", nome);
  escrevalinha();

  printf("\nDeseja comecar?");
  printf("\n[1] Sim, desejo comecar");
  printf("\n[2] Nao, finalizar.");
  escrevalinha();

  printf("\n %s, Digite aqui: ", nome);
  scanf("%d", &resp);
  system("cls");

  if (resp == 1)
  {

    do
    {
      apresentar_mapa();
      nome_brazil();
      escrevalinha2();
      printf("\n[1] ESTADOS");
      printf("\n[2] REGIOES");
      printf("\n[3] QUIZ");
      printf("\n[4] SAIR\n");
      printf("\nDigite o numero: ");
      fflush(stdin);
      scanf("%i", &esc);
      system("cls");

      switch (esc)
      {
      case 1:
        estados();
        break;
      case 2:
        regioes();
        break;
      case 3:
        quiz();
        break;
      case 4:
        printf("\nTem certeza que deseja sair?");
        printf("\nDigite --> [0] para sair ou [1] para continuar: ");
        scanf("%d", &op);
        if (op == 0)
        {
          break;
        }
        else
        {
          esc = 0;
        }
        break;
      default:
        printf("o numero que voce digitou nao esta entre 1 e 4. ");
        break;
      }
      //system("pause");
    } while (esc != 4);
  }
  else
  {
    printf("\nPrograma finalizado :)");
  }
  return 0;
}

void escrevalinha()
{
  printf("\n-----------------------------------------------------------------------------------------------\n");
}
void escrevalinha2()
{
  printf("\n==========================================");
}
void estados()
{
  printf("\n          - ESTADOS DO BRASIL -     \n");
  escrevalinha2();
  escrevalinha2();
  char estados[27][10000] =
      {
          "Acre                           [AC]      |",
          "Alagoas                        [AL]      |",
          "Amapa                          [AP]      |",
          "Amazonas                       [AM]      |",
          "Bahia                          [BA]      |",
          "Ceara                          [CE]      |",
          "Espirito Santo                 [ES]      |",
          "Goias                          [GO]      |",
          "Maranhao                       [MA]      |",
          "Mato Grosso                    [MT]      |",
          "Mato Grosso do Sul             [MS]      |",
          "Minas Gerais                   [MG]      |",
          "Para                           [PA]      |",
          "Paraiba                        [PB]      |",
          "Parana                         [PR]      |",
          "Pernambuco                     [PE]      |",
          "Piaui                          [PI]      |",
          "Rio de janeiro                 [RJ]      |",
          "Rio Grande do Norte            [RN]      |",
          "Rio Grande do Sul              [RS]      |",
          "Rondonia                       [RO]      |",
          "Roraiama                       [RR]      |",
          "Santa Catarina                 [SC]      |",
          "Sao Paulo                      [SP]      |",
          "Sergipe                        [SE]      |",
          "Tocantins                      [TO]      |",
          "Distrito Federal               [DF]      |"};
  for (int x = 0; x < 27; x++)
  {
    printf("\n%s", estados[x]);
  }
  escrevalinha2();
  printf("\n    26 estados e um distrito federal");
  escrevalinha2();

  char sigla[4];
  printf("\n\nEm letras(M) digite a sigla do estado e saiba mais sobre ele: ");
  fflush(stdin);
  scanf("%[^\n]s", &sigla);
  system("cls");

  if (strcmp(sigla, "AC") == 0)
  {
    escrevalinha();
    AC();
    escrevalinha();
   system("pause");
   system("cls");
  }

  if (strcmp(sigla, "AL") == 0)
  {
    escrevalinha();
    AL();
    escrevalinha();
     system("pause");
   system("cls");
    
  }

  if (strcmp(sigla, "AP") == 0)
  {
    escrevalinha();
    AP();
    escrevalinha();
     system("pause");
   system("cls");
  }

  if (strcmp(sigla, "AM") == 0)
  {
    escrevalinha();
    AM();
    escrevalinha();
     system("pause");
   system("cls");
  }

  if (strcmp(sigla, "BA") == 0)
  {
    escrevalinha();
    BA();
    escrevalinha();
     system("pause");
   system("cls");
  }

  if (strcmp(sigla, "CE") == 0)
  {
    escrevalinha();
    CE();
    escrevalinha();
     system("pause");
   system("cls");
  }

  if (strcmp(sigla, "ES") == 0)
  {
    escrevalinha();
    ES();
    escrevalinha();
     system("pause");
   system("cls");
  }

  if (strcmp(sigla, "GO") == 0)
  {
    escrevalinha();
    GO();
    escrevalinha();
     system("pause");
   system("cls");
  }

  if (strcmp(sigla, "MA") == 0)
  {
     escrevalinha();
    MA();
     escrevalinha();
      system("pause");
   system("cls");
  }

  if (strcmp(sigla, "MT") == 0)
  {
     escrevalinha();
    MT();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "MS") == 0)
  {
     escrevalinha();
    MS();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "MG") == 0)
  {
     escrevalinha();
    MG();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "PA") == 0)
  {
     escrevalinha();
    PA();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "PB") == 0)
  {
     escrevalinha();
    PB();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "PR") == 0)
  {
     escrevalinha();
    PR();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "PE") == 0)
  {
     escrevalinha();
    PE();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "PI") == 0)
  {
     escrevalinha();
    PI();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "RJ") == 0)
  {
     escrevalinha();
    RJ();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "RN") == 0)
  {
     escrevalinha();
    RN();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "RS") == 0)
  {
     escrevalinha();
    RS();
     escrevalinha();
       system("pause");
   system("cls");
  }

  if (strcmp(sigla, "RO") == 0)
  {
     escrevalinha();
    RO();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "RR") == 0)
  {
     escrevalinha();
    RR();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "SC") == 0)
  {
     escrevalinha();
    SC();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "SP") == 0)
  { 
     escrevalinha();
    SP();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "SE") == 0)
  {
     escrevalinha();
    SE();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "TO") == 0)
  {
     escrevalinha();
    TO();
     escrevalinha();
       system("pause");
   system("cls");
  }
  if (strcmp(sigla, "DF") == 0)
  {
     escrevalinha();
    DF();
     escrevalinha();
       system("pause");
   system("cls");
  }
}

void AC()
{

  printf("\nO Acre era, ate a segunda metade do seculo XIX, habitado pelas populacoess\nindigenas e ainda fazia parte dos territorios boliviano e peruano.\n A partir de 1877, motivados pela exploracao do latex, os primeiros migrantes da Regiao Nordeste\ndo país chegaram ao território acriano. Entre 1899 e 1909, disputas pelo domínio\nda área foram travadas entre os bolivianos, peruanos e os brasileiros que ali estavam.");
  escrevalinha();
  dados();
  printf("\nRegiao: Norte.");
  printf("\nCapital: Rio Branco.");
  printf("\nGoverno: Gladson de Lima Cameli (2018-2022).");
  printf("\nArea territorial: 164.123,964 km^2.");
  printf("\nPopulacao: 894.470 habitantes.");
  printf("\nDensidade demografica: 4,47 hab/km^2.");
  printf("\nFuso: GMT -5 (2 horas adiantado em relação ao horario de Brasilia).");
  printf("\nClima: equatorial umido.");
}
void AL()
{
  
  printf("\nAlagoas e o segundo menor estado do Brasil e faz fronteira com o Oceano Atlantico a leste,\n Sergipe ao sul, Pernambuco ao norte e oeste e Bahia a sudoeste.\nSua historia esta ligada ao processo de colonizacao brasileira, e sua economia tem o setor terciario como o mais forte.\n Ocupa o 21º lugar no ranking do PIB nacional e e um dos estados do Nordeste brasileiro mais importantes na producao de cana-de-acucar.");
  escrevalinha();
  dados();
  printf("\nRegiao: Nordeste.");
  printf("\nCapital: Maceio.");
  printf("\nArea territorial: 27.843,295 km^2 (IBGE, 2019).");
  printf("\nPopulacao: 3.351.543 milhoes de habitantes (estimativa IBGE, 2020).");
  printf("\nDensidade demografica: 112,33 hab./km^2 (IBGE, 2020).");
  printf("\nFuso: GTM -3 (horario de Brasilia).");
  printf("\nClima: tropical umido.");

}
void AP()
{
  printf("\nO Amapa e um dos estados do Brasil e situa-se no extremo norte do territorio.\n Integra a Regiao Norte, onde faz divisa com o Para com dois paises: Guiana Francesa e Suriname. \n clima amapaense e o equatorial umido, e sua cobertura vegetal e formada por florestas, \nvegetacao litoranea e algumas areas de cerrado. ");
  escrevalinha();
  dados();
  printf("\nRegião: Norte.");
  printf("\nCapital: Macapa.");
  printf("\nGoverno: Waldez Goes (2018-2022) e vice-governador Jaime Nunes.");
  printf("\nArea territorial: 142.470,762 km^2. (IBGE, 2019).");
  printf("\nPopulacao: 861.773 habitantes. (IBGE, 2020)");
  printf("\nDensidade demografica: 4,69 hab/km^. (IBGE, 2010)");
  printf("\nFuso: GMT - 3 horas (Horario Padrao de Brasilia).");
  printf("\nClima: equatorial umido.");
}
void AM()
{
  dados();
  printf("\nO estado do Amazonas pertence a regiao Norte do Brasil, sendo o maior em territorio,\n com uma populacso de 4,2 milhoes de habitantes. Tem na sua capital, Manaus, a principal cidade e aglomeracso urbana do estado.\nO estado apresenta dinamica economica voltada aos setores secundario e terciario,\n com destaque para os servicos e a industria, que somam juntos mais de 80 do seu PIB.");
 
  
}
void BA()
{
  
  dados();
  printf("\nBahia: apresenta uma area de 584.733 km^2 e populacao de, aproximadamente, 14.812.617 habitantes.");
  printf("\nQuem nasce nesse estado é baiano. Possui 417 municipios.");
}
void CE()
{
  
  dados();
  printf("\n O Ceara em uma area estimada em 148.920 km^2 e uma populacao de 9.075.649 habitantes.");
  printf("\nQuem nasse nesse estado e cearense. Possui 184 municipios.");

}
void ES()
{
  dados();
  printf("\npossui uma área de 46.095 km² e uma população total de 4.016.356. \nQuem nasce nesse estado é capixaba ou espírito-santense. Apresenta 78 municípios.");
 
 
}
void GO()
{
  dados();
  printf("\ncompreende uma área de 340.111 km² e uma população estimada em 6.991.161 habitantes. \nQuem nasce nesse estado é goiano. Possui 246 municípios.");
 
}
void MA()
{
  printf("\npossui uma área de, aproximadamente, 331.937 km² e uma população de cerca de 7.035.055 de habitantes. \n nasce nesse estado é maranhense. Apresenta 217 municípios.");

}
void MT()
{
  printf("\npossui uma área de 903.378 km² e, aproximadamente, 3.441.998 habitantes. \nQuem nasce nesse estado é mato-grossense. Possui 141 municípios.");

}
void MS()
{
  printf("\nabrange uma área de, aproximadamente, 357.145 km² e uma população total de 2.478.023 habitantes.\n Quem nasce nesse estado é sul-mato-grossense. Possui 77 municípios.");

}
void MG()
{
  printf("\napresenta uma área de 586.522 km² e cerca de 21.119.536 de habitantes.\n Quem nasce nesse estado é mineiro. Possui 853 municípios.");

}
void PA()
{
  printf("\napresenta cerca de 1.247.954 km² e uma população total de 8.578.051 habitantes.\n Quem nasce nesse estado é paraense. Possui 144 municípios.");
  
}
void PB()
{
  printf("\nabrange uma área de 56.469 km² e tem de 3.996.496 habitantes. \nQuem nasce nesse estado é paraibano. Possui 223 municípios.");
  
}
void PR()
{
 printf("\npresenta uma área de, aproximadamente, 199.307 km² e uma população total de 11.348.937 habitantes.\n Quem nasce nesse estado é paranaense. Possui 399 municípios");

}
void PE()
{
  printf("\ncompreende uma área de, aproximadamente, 98.149 km² e tem cerca de 9.496.294 de habitantes. \nQuem nasce nesse estado é pernambucano. Possui 185 municípios.");
  
}
void PI()
{
  printf("\npossui 251.577 km², aproximadamente, e uma população de 3.264.531 habitantes. Quem nasce nesse estado é piauiense. Apresenta 224 municípios.");

}
void RJ()
{
  printf("\ncompreende uma área de, aproximadamente, 43.780 km² e uma população total de 16.718.956 habitantes. \nQuem nasce nesse estado é fluminense. Possui 92 municípios.");
  
}
void RN()
{
  printf("\nabrange uma área de, aproximadamente, 52.811 km² e tem uma população total de 3.479.010 habitantes.\n Quem nasce nesse estado é norte-rio-grandense ou potiguar. Possui 167 municípios.");
  
}
void RS()
{
 printf("\ncompreende uma área de, aproximadamente, 281.730 e uma população total de 11.329.605 habitantes. \nQuem nasce nesse estado é gaúcho ou sul-rio-grandense. Possui 497 municípios.");
 
}
void RO()
{
  printf("\napresenta cerca de 237.590 e uma população estimada em 1.787.279 habitantes. \nQuem nasce nesse estado é rondoniense. Possui 52 municípios.");
  
}
void RR()
{
 printf("\npossui 224.300 km² e uma população de, aproximadamente, 576.568 habitantes. \nQuem nasce nesse estado é roraimense. Apresenta 15 municípios.");

}
void SC()
{
 printf("\nabrange uma área de 95.736 km² e apresenta uma população total de 6.910.553 habitantes. \nQuem nasce nesse estado é catarinense. Possui 295 municípios.");

}
void SP()
{
  printf("\nabrange uma área de 248.222 km² e um total aproximado de 45.538.936 habitantes.\n Quem nasce nesse estado é paulista. Possui 645 municípios.");
  
}
void SE()
{
 printf("\npossui uma área de cerca de 21.915 km² e um total de 2.278.308 habitantes.\n Quem nasce nesse estado é sergipano. Apresenta 75 municípios.");
  
}
void TO()
{
  printf("\nabrange uma área de 277.620 km² e possui uma população estimada em 1.550.194 habitantes. Quem nasce nesse estado é tocantinense. Possui 139 municípios.");

}
void DF()
{
  dados();
  printf("\npossui cerca de 5.779 km² e uma população total de 3.039.444 habitantes.\n Quem nasce no Distrito Federal é brasiliense.");

  
}
void regioes()
{
  printf("\n- Regioes do Brasil -");

  int x = 0;

  escrevalinha();
  printf("\nPossuindo 26 estados e o distrito federal.");
  printf("\nEm 1969 o IBGE: separou os estados em cinco regioes.\n");
  while (x != 6)
  {

    printf("\n[1] Norte");
    printf("\n[2] Sul");
    printf("\n[3] Nordeste");
    printf("\n[4] Sudeste");
    printf("\n[5] Centro-Oeste");
    printf("\n[6] Sair\n");
    printf("\nQual a regiao quer saber mais?\nDigite aqui: ");
    scanf("%d",&x);
    system("cls");
    escrevalinha();
    system("cls");

    switch(x){
    case 1:
        printf("\nNorte, em Game of Thrones voce receberia: Winter is coming kk.");
        printf("\nOs estados que compoe esta regiao:\n");
        printf("\nTocantins[TO];");
        printf("\nAcre     [AC];");
        printf("\nPara     [PA];");
        printf("\nRondonia [RO];");
        printf("\nRoraima  [RR];");
        printf("\nAmapa    [AP];");
        printf("\nAmazonas [AM];");
        printf("\nSendo a maior regiao em area e tendo a menor populacao entre as outras regioes\n\n");
        system("pause");
        system("cls");
        
        break;
    case 2:
        printf("\nO Sul e a menor regiao do Brasil em extensao territorial correspondendo a, apenas, 6,8 do territorio brasileiro.");
        printf("\nCompreende três estados: Paraná, Rio Grande do Sul e Santa Catarina.\n\n");
        system("pause");
        system("cls");
        
    break;

    case 3:
        printf("\nE a regiao com maior número de estados e a terceira maior do pais,\ncorrespondendo a, aproximadamente, 18 do territorio brasileiro, segundo o IBGE.");
        printf("\nCompreende nove estados, sendo eles: Maranhao, Piaui, Ceara, Rio Grande do Norte, Paraiba, Pernambuco, Alagoas, Sergipe e Bahia.\n\n");
        system("pause");
        system("cls");
        
    break;
    case 4:
        printf("\nO sudeste é a segunda menor regiao do pais em extensao territorial, ao passo que e a regiao de maior relevancia economica");
        printf("\n,considerada o centro de desenvolvimento do Brasil, responsavel por cerca de 55,2 do Produto Interno Bruto.");
        printf("\ne composta por quatro estados: Espirito Santo, Minas Gerais, Rio de Janeiro e Sao Paulo.\n\n");
        system("pause");
        system("cls");
        
    break;
    case 5:
        printf("\nA regiao centro-oeste e formada por tres estados: Goias, Mato Grosso e Mato Grosso do Sul, mais o distrito federal, onde se localiza Brasilia,\na capital do pais e a cidade mais populosa da regiao\n\n");
        system("pause");
        system("cls");
        
    break;
    case 6:
    break;

    }
  }
}
void quiz()
{
  int quiz[4], point;
  point=0;
  printf("\n   -    Exercicios      -\n");
  escrevalinha();
  printf("\n%s, vamos praticar.",nome);
  printf("\nAquie estao algumas questoes sobre o que viu aqui\nOs exercicios são para voce concretizar seu conhecimento, cada questao vale um ponto.\n\n");
  escrevalinha();
  system("pause");
  system("cls");

  printf("\nA resposta a ser digita e a entre '[]'.\n");
  escrevalinha();
  printf("\nI. A floresta Amazonica esta presente em qual regiao e clima?");
  printf("\n[1] Amazonica - tropical \n[2] Norte - subtropical \n[3] Nordeste - equatorial \n[4] Norte - Tropical \n[5] Norte - equatorial\n");
  printf("\nResposta: ");
  scanf("%d",&quiz[0]);
escrevalinha();
  if(quiz[0]==5)
  {
    point++;
    printf("\nResposta correta! %s você acaba de ganhar %i ponto.\n\n",nome,point);
  }else{
    printf("\nResposta incorreta! -1\n");
    point=point-1;
  }
  system("pause");
  system("cls");
 
  printf("\nII. Qual e a maior regiao em extensao territorial?");
  printf("\n[1] Regiao Sul \n[2] Regiao Norte \n[3] Regiao Nordeste \n[4] Regiao Sudeste \n[5] Regiao Centro-Oeste\n");
  printf("\nResposta: ");
  scanf("%d",&quiz[1]);

  if(quiz[1]==2)
  {
     point++;
    printf("\nResposta correta! agora: %i pontos.\n",point);
   
  }else{
    printf("\nResposta incorreta! -1\n\n");
    point=point-1;
  }
  system("pause");
  system("cls");

 escrevalinha();
 printf("\nIII. Quantos estados tem a região nordeste do Brasil?");
 printf("\n[1] 9 \n[2] 8  \n[3] 10  \n[4] 5  \n[5] 7 ");
 printf("\nResposta: ");
 scanf("%d",&quiz[2]);
 escrevalinha();
 if(quiz[2]==1)
 {
    point++;
    printf("\nResposta correta! %i ponto.\n\n",point);
  
 }
 else{
   printf("\nResposta incorreta! -1 \n\n");
   point=point-1;
   
 }
  system("pause");
  system("cls");

 escrevalinha();
  printf("\nQuantos municipios tem o estado de Alagoas?");
  printf("\n[1] 199 \n[2] 98 \n[3] 102 \n[4] 175 \n[5] 56");
  printf("\nResposta: ");
  scanf("%d",&quiz[3]);
escrevalinha();

 if(quiz[3]==3)
 {
   point++;
  printf("\nResposta correta! %i pontos.\n",point);
   
}else{
    printf("\nResposta incorreta! -1\n");
    point=point-1;
}
  system("pause");
  system("cls");
 
 printf("\n%s, estes sao seus pontos: %i",nome,point);
 if(point == 4){
   printf("\nParabens! Voce acertou todas =).\n\n");
 }
 if(point == 3){
   printf("\nPor pouco nao acertou tudo\n\n.");
 }
 if(point == 2){
   printf("\nEita!E bom voce revisar um pouco mais.\n\n");
 }
 if(point == 1){
   printf("\nPoxa...tenta outra vez, talvez voce melhore.\n\n");
 }
  system("pause");
  system("cls");
}


void dados(){
   printf("\n\n    -   Dados Gerais   -    \n\n");
}

void apresentar_mapa(){

char mapa[15][10000]=
{

 "              .__.-+__._/V__                     ",
 "            / V/   V/       |__                  ",
 "           )        *          |-+._               ",
 "          /                        L             ",
 "         (    *  B R A Z I L   *    )                ",
 "          |_                       /                 ",
 "            |__          *        (                 ",
 "               >_                 )                 ",
 "                 ^|_.            /                  ",
 "                    <           /                 ",
 "                     L   *    _/                    ",
 "                      >     /                      ",
 "                     /    /                       ",
 "                    <    /                        ",
 "                      ^./                          "};
    
for(int y = 0; y<16; y++){
    printf("\n%s",mapa[y]);
}
}

void nome_brazil(){
char nome[8][100000]={

"88                                           88  88",
"88                                           00  88",
"88                                               88",
"88,dPPYba,  8b,dPPYba, ,adPPYYba, 888888888  88  88",
"88P      8a 88P'    Y8 ``     `Y8      a8P   88  88",
"88       d8 88         ,adPPPPP88   ,d8P'    88  88", 
"88b,   ,a8  88         88,    ,88 ,d8`       88  88",
"8Y Ybbd8`'  88         `^8bbdP``Y8 888888888 88  88"};

for(int z=0;z<9;z++){
    printf("\n%s",nome[z]);
}
}

