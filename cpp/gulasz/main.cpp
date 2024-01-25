#include <iostream>

using namespace std;

int main(){
int km=0;
int spal=0;
int cena=0;
int osoby=0;
int wynik=0;
cout<<"trasa w km ";
cin>>km;
cout<<"średnie spalanie na 100km ";
cin>>spal;
cout<<"cena za litr ";
cin>>cena;
cout<<"ilość osób ";
cin>>osoby;
wynik=km/100;
wynik=wynik*spal;
wynik=wynik*cena;
wynik=wynik/osoby;
cout<<wynik;
}
