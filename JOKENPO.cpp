#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define Chamada1 cout<< "       OLA QUAL SEU NOME?\n";
#define Chamada2 cout<<"       \n           ESCOLHA UM NUMERO:\n\n            PEDRA:0\n       \n            PAPEL: 1 \n \n            TESOURA: 2\n\n";



int main(){int escolha, CPU, placarj=0, placarcpu=0; // as variaveis
string Name1;  // o nome do jogador
char opc; //usado no final pra testar se  jogador ainda quer jogar
inicio:
system ("cls"); // limpa a tela apos retornar ao inicio:
Chamada1;
cin >> Name1; 
cout <<"           "; cout<< Name1;
cout <<",VAMOS JOGAR JOKENPO\n";  
Chamada2;
cin >> escolha; while (escolha>=3){cout<< "ESCOLHA DE 0 A 2:"; cin>> escolha;};// obriga o jogador a escolher de 0 a 2
switch (escolha){case 0: cout<<    "\nVOCE ESCOLHEU PEDRA \n";break;
case 1: cout<< "\nVOCE ESCOLHEU PAPEL\n";break; 
case 2: cout <<  "\nVOCE ESCOLHEU TESOURA\n";break;};
srand(time (NULL));
CPU=rand()%3;// cria um numero aleatorio de 0 a 2
 switch (CPU){case 0: cout<<    "\nO COMPUTADOR ESCOLHEU PEDRA \n";break;
case 1: cout<< "\nO COMPUTADOR ESCOLHEU PAPEL\n";break; 
case 2: cout <<  "\nO COMPUTADOR ESCOLHEU TESOURA\n";break;}
if (escolha==0 && CPU==2||escolha==1 && CPU==0||escolha==2 && CPU==1){cout<< "\nVOCE VENCEU!!\n";placarj++;} //testa se o jogador venceu e adiciona os pontos ao placar
if (escolha==CPU){cout<< "\nEMPATE!!\n";}   // testa se deu empate
if (escolha==2 && CPU==0||escolha==0 && CPU==1||escolha==1 && CPU==2){cout<< "\nO COMPUTADOR VENCEU!!\n"; placarcpu++;} //testa se a CPU venceu e adiciona os pontos ao placar
cout<< "\nPLACAR: CPU " << placarcpu<< " X "<<placarj<< " JOGADOR\n";// imprime o placar
cout<< "\nDESEJA JOGAR NOVAMENTE? [S OU N]\n";
cin>> opc;
if (opc=='S' or  opc== 's'){goto inicio;}

return 0;}




