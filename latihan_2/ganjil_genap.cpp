#include <iostream>

using namespace std;

int main()
{
	int angka = 11;
	string hasil = (angka % 2 == 0) ? "genap" : "ganjil";

	cout<<angka<<" adalah bilangan "<<hasil<<endl;

	return 0;
}