#include <iostream>

using namespace std;

int main(){
int x;
int y;
int z;
for(y=2;y<=1000;y++){
	x=1;
for(z=2;z*z<=y;z++){
	if(y%z==0){
	x=0;
	break;
}
}
if(x==1){
cout<<y<<", ";
}
}
	return 0;
}
