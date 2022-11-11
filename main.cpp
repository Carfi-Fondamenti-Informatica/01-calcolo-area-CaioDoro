#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
  
float Atriangolo, Aquadrato, Arettangolo, Atrapezio, a, b, c;
cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti

    Atriangolo = (a * b) / 2;
    Aquadrato = a * a;
    Arettangolo = a * b;
    Atrapezio = ((a + b) * c) / 2;

    cout << Atriangolo << endl;
    cout << Aquadrato << endl;
    cout << Arettangolo << endl;
    cout << Atrapezio << endl;
  
  return 0;

}
