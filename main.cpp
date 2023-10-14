#include <iostream>
#include <cmath>

using namespace std;

double Spalanie,Kosztpaliwa,x,y;

int Przejechanekilometry;
int main()

{
    cout << "Ile litrow paliwa srednio pali twoje auto na sto kilometrow:";
    cin >> Spalanie;

    cout << "Ile kilometrow przejechales:";
    cin >> Przejechanekilometry;

    cout << "Ile kosztuje paliwo za litr:";
    cin >> Kosztpaliwa;

    x = Spalanie*Przejechanekilometry/100;
    cout<<"Podczas jazdy spaliles: "<<x;
    cout<< " Litry/ow Paliwa";

    y = round((x*Kosztpaliwa)*100)/100;
    cout<<endl<<"Koszt Paliwa: "<<y;
    cout<< " zl";

    return 0;
}
