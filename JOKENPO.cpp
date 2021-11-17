#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define Chamada1 cout<< "       OLA QUAL SEU NOME?\n";
#define Chamada2 cout<<"       \n           ESCOLHA UM NUMERO:\n\n            PEDRA:0\n       \n            PAPEL: 1 \n \n            TESOURA: 2\n\n";



int main(){int escolha, CPU, placarj=0, placarcpu=0;	
string Name1; 
char opc;
inicio:
system ("cls");
Chamada1;
cin >> Name1; // entrada do nom do usuario representando o nome do jogador
cout <<"           "; cout<< Name1;
cout <<",VAMOS JOGAR JOKENPO\n";   // 15 ao 17 so imprimem texto na tela
Chamada2;
cin >> escolha; while (escolha>=3){cout<< "ESCOLHA DE 0 A 2:"; cin>> escolha;};
switch (escolha){case 0: cout<<    "\nVOCE ESCOLHEU PEDRA \n";break;
case 1: cout<< "\nVOCE ESCOLHEU PAPEL\n";break; 
case 2: cout <<  "\nVOCE ESCOLHEU TESOURA\n";break;};
srand(time (NULL));
CPU=rand()%3;
 switch (CPU){case 0: cout<<    "\nO COMPUTADOR ESCOLHEU PEDRA \n";break;
case 1: cout<< "\nO COMPUTADOR ESCOLHEU PAPEL\n";break; 
case 2: cout <<  "\nO COMPUTADOR ESCOLHEU TESOURA\n";break;}
if (escolha==0 && CPU==2||escolha==1 && CPU==0||escolha==2 && CPU==1){cout<< "\nVOCE VENCEU!!\n";placarj++;}
if (escolha==CPU){cout<< "\nEMPATE!!\n";}  
if (escolha==2 && CPU==0||escolha==0 && CPU==1||escolha==1 && CPU==2){cout<< "\nO COMPUTADOR VENCEU!!\n"; placarcpu++;}
cout<< "\nPLACAR: CPU " << placarcpu<< " X "<<placarj<< " JOGADOR\n";
cout<< "\nDESEJA JOGAR NOVAMENTE? [S OU N]\n";
cin>> opc;
if (opc=='S' or  opc== 's'){goto inicio;}


return 0;}




