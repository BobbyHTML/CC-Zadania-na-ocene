// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n;
   cout << "n: ";
   cin >> n;
   
   int suma = 0;
   
   for (int i = 1; i <=n; ++i){
       suma += i;
   }
   
   cout << suma;
   
   
}
