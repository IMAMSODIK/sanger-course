#include <iostream>

using namespace std;

int main()
{
	int angka_1, angka_2, helper;

	cout<<"masukkan angka pertama : ";
	cin>>angka_1;
	cout<<"masukkan angka kedua : ";
	cin>>angka_2;

	cout<<"angka pertama : "<<angka_1<<endl;
	cout<<"angka kedua : "<<angka_2<<endl;

	helper = angka_1;
	angka_1 = angka_2;
	angka_2 = helper;

	cout<<"\n\n";
	cout<<"angka pertama : "<<angka_1<<endl;
	cout<<"angka kedua : "<<angka_2<<endl;

	return 0;
}