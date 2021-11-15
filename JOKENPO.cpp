#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){int Num1=0, CPU=0;
string Name1;
cout << "       OLA QUAL SEU NOME?\n";
cin >> Name1; // entrada do nom do usuario representando o nome do jogador
cout <<"           "; cout<< Name1;
cout <<",VAMOS JOGAR JOKENPO \n";   // 15 ao 17 so imprimem texto na tela
cout<< "           \n";cout << "           ESCOLHA UM NUMERO:\n";cout << "          \n";cout << "           PEDRA:0\n";
cout <<  "          \n";cout << "           PAPEL: 1 \n";cout<< " \n           TESOURA: 2\n";
cin >> Num1;while (Num1>2) {cout<<"   ESCOLHA INVALIDA, ESCOLHA DE 0 A 2\n"; cin >> Num1;} // OBRIGA O USUARIO A ESCOLHEU UM NUMERO MENOR QUE 3 DE
if (Num1==0){cout<<"           VOCE ESCOLHEU PEDRA.\n";}
if (Num1==1){cout<<"           VOCE ESCOLHEU PAPEL.\n";}
if (Num1==2){cout<<"           VOCE ESCOLHEU TESOURA.\n";}

srand (time (NULL)); CPU=rand()%3;
switch (CPU){case 0: cout<<    "\n           O COMPUTADOR ESCOLHEU PEDRA \n";break;
case 1: cout<< "\n        O COMPUTADOR ESCOLHEU PAPEL\n";break; case 2: cout <<  "\n        O COMPUTADOR ESCOLHEU TESOURA\n";break; 
}
if (Num1==0 && CPU==2){cout <<  "\n           VOCE VENCEU!!\n";}
else if (Num1==1 && CPU==0){cout << "\n           VOCE VENCEU!!\n";}
else if (Num1==2 && CPU==1){cout << "\n           VOCE VENCEU!!\n";}
else  if(Num1==CPU) { cout<<setw(25);   "\n               EMPATE""\n";}
else if (Num1==2 && CPU==0){cout <<  "\n           VOCE VENCEU!!\n";}
else if (Num1=0 && CPU==1){cout << "\n           VOCE VENCEU!!\n";}
else if (Num1==1 && CPU==2){cout <<   "\n           VOCE VENCEU!!\n";}
else cout<< "\n           O COMPUTADOR VENCEU!!\n";


 



return 0;}




