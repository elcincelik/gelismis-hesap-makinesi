#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int sayi1;
	cout<<"Bir sayi giriniz:";
	cin>>sayi1;
	int islem;
	cout<<"Bir islem seciniz:"<<endl;
	cout<<"1=karekok alma"<<endl;
	cout<<"2=us alma"<<endl;
	cout<<"3=e tabaninda logaritma"<<endl;
	cout<<"4=10 tabaninda logaritma"<<endl;
	cin>>islem;
	switch(islem)
	{
		case 1:
			cout<<"Karekok Alma="<<sqrt(sayi1);
			break;
		case 2:
			int us;
			cout<<"us girin:";
			cin>>us;
			cout<<"Us Alma="<<pow(sayi1,us);
			break;
		case 3:
			cout<<"e tabaninda log="<<log(sayi1);
			break;
		case 4:
			cout<<"10 tabaninda log="<<log10(sayi1);
			break;
		default:
			cout<<"Gecersiz sayi girdiniz.";
			break;
	}
}
