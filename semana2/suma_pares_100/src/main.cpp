#include <iostream>
using namespace std;
// Suma los pares que hay entre el 0 y el 100 (excluido) 
int main()
{
  int suma = 0;
  for(int numero = 0; numero < 100; numero++)
  {
    if(numero % 2 == 0)
    {
      suma += numero;
    }
  }
  cout << "La suma de pares es "<< suma << endl;  
  return 0;
}
