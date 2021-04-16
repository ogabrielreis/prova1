#include <iostream>

using namespace std;

string escreverPalavra() {
  
  return palavra;
}

int main() {
  int tamanhoPalavra;

  cout << "Bem vindo ao programa de escrita do celular" << endl;
  cout << "Para escrever a palavra, insira quantos dígitos tem (máx 50): \n";
  cin >> tamanhoPalavra;
  cout << tamanhoPalavra << endl;
  
  int palavra[tamanhoPalavra];

  cout << "Para começarmos, vamos dar algumas instruções: \n";
  cout << "Para escolher a letra que quer usar use os códigos da tecla do celular, por exemplo: \n";
  cout << "Para digitar o A, escreva '#2=1' \n";
  cout << "Para o B, escreva '#2=2' \n";
  cout << "As posições das letras são: \n";
  cout << "2 = a,b,c \n";
  cout << "3 = d,e,f \n";
  cout << "4 = g,h,i \n";
  cout << "5 = j,k,l \n";
  cout << "6 = m,n,o \n";
  cout << "7 = p,q,r,s \n";
  cout << "8 = t,u,v \n";
  cout << "9 = w,x,y,z \n";


  
}