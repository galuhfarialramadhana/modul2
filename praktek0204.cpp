#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int lr;
	
	double lp=193*1215;
	
	double box=lp*8/1000000;
	
	double jb, parket, pasang, total;
	cout<<"Luas Rumah		: ";
	cin>>lr;
	
	cout<<"Luas Rumah		: "<<lr<<" m2"<<endl;
	cout<<"Luas 1 Box Parket	: "<<box<<" m2"<<endl;
	
	jb=lr/box;
	cout<<"Jumlah Box Parket	: "<<jb<<endl;
	
	parket=jb*500;
	cout<<"Biaya Parket(Rp)	: "<<parket<<endl;
	
	pasang=lr*20;
	cout<<"Biaya Pasang(Rp)	: "<<pasang<<endl;
}
