#include <iostream>
using namespace std;

int main(){
int t;
int x;
cout<<"Podaj czas gotowania jajka(minuty) ";
cin>>t;
for(x=0;x<t;x++){
    cout<<x<<" ";
    if(x=4){
	cout<<"Masz jajko na miękko"<<endl;
    }
    if(x=8){
	cout<<"Masz jajko na twardo"<<endl;
    }
    if(x=20){
	cout<<"Woda się wygotowała"<<endl;
    }
    if(x=30){
	cout<<"Garnek się pali"<<endl;
    }
    if(x=35){
	cout<<"kuchnia się pali"<<endl;
    }
    if(x=40){
	cout<<"Dom ci się pali"<<endl;
    }
}
return 0;
}
