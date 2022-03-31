#include <iostream>
using namespace std;

int main() {
   int n, i, a=0, b=1, risultato=0;
    cin >> n;
    if (n<2){
        cout << "errore";
    }else{
        for (i=0;i<n;i++){
          risultato=a+b;
          b=a;
          a=risultato;
          cout << risultato << endl;
        }
    }
   return 0;
}
