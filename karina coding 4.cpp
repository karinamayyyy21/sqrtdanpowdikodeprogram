#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double X, Akar, Pangkat;
 cout << "Masukan Nilai x: ";
 cin >> X;
 
 Akar = sqrt(X);
 Pangkat = pow(X, 2);
 
 cout << "Akar dari " << X << " = " << Akar << endl;
 cout <<"Pangkat dari "<< X << " = "<<Pangkat<< endl;
 
 system ("PAUSE");
 return 0;
}
