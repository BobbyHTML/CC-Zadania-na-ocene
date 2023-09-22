// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n;
  double suma = 0;
  
  cout << "Podaj ilosc liczb do obliczenia sredniej: ";
  cin >> n;
  
  for(int i = 0; i < n; ++i){
      double liczba;
      cout << "Podaj liczbe: ";
      cin >> liczba;
      suma += liczba;
  }
  
  double srednia = suma / n;
  cout << "srednia: " << srednia << endl;
  
}
