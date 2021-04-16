#include <iostream>

using namespace std;


string escreverPalavra(int tamanho)
{
  string aux, palavraEscrita;
  int posicao, letra;
  for (int i = 0; i < tamanho; i++)
  {
    cout << "Digite a letra: \n";
    cin >> aux;
    for (int j = 0; j<4; j++)
    {
      if(aux[j-1] == '#')
      {
        posicao = aux[j];
      }
      if (aux[j-1] == '=')
      {
        letra = aux[j];
      }
    }

    switch(posicao)
    {
      case 1:
        cout << "Inexistente, tente de novo!\n";
        break;


      case 2:
        if (letra == 1)
        {
          palavraEscrita[i] = 'a';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'b';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'c';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;


      case 3:
        if (letra == 1)
        {
          palavraEscrita[i] = 'd';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'e';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'f';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;


      case 4:
        if (letra == 1)
        {
          palavraEscrita[i] = 'g';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'h';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'i';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;


      case 5:
        if (letra == 1)
        {
          palavraEscrita[i] = 'j';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'k';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'l';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;


      case 6:
        if (letra == 1)
        {
          palavraEscrita[i] = 'm';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'n';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'o';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;


      case 7:
        if (letra == 1)
        {
          palavraEscrita[i] = 'p';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'q';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'r';
        }
        else if (letra == 4)
        {
          palavraEscrita[i] = 's';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;


      case 8:
        if (letra == 1)
        {
          palavraEscrita[i] = 't';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'u';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'v';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;


      case 9:
        if (letra == 1)
        {
          palavraEscrita[i] = 'w';
        }
        else if (letra == 2)
        {
          palavraEscrita[i] = 'x';
        }
        else if (letra == 3)
        {
          palavraEscrita[i] = 'y';
        }
        else if (letra == 4)
        {
          palavraEscrita[i] = 'z';
        }
        else
        {
          cout << "Letra inexistente, tente de novo!";
        }
        break;
      break;
    }
    cout << "Boa escolha!\n";
  }
  cout << palavraEscrita;
  return 0;
}


int main() {
  int tamanhoPalavra;

  cout << "Bem vindo ao programa de escrita do celular" << endl;
  cout << "Para escrever a palavra, insira quantos dígitos tem (máx 50): \n";
  cin >> tamanhoPalavra;
  cout << tamanhoPalavra << endl;
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

  escreverPalavra(tamanhoPalavra); 
  
}