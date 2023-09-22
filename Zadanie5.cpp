#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Podaj liczbe: ";
  cin >> n;
  
  int sil = 1;
  
  for(int i = 2; i <= n; ++i){
      sil *=i;
  }
  cout << n << "! = " << sil << endl;
}
